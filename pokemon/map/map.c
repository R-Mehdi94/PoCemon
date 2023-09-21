//
// Created by r-mehdi on 21/09/23.
//

#include <stdio.h>
#include <stdlib.h>



int **createMap(){

    int nbLigne = 30;
    int nbColonne = 25;



    int **map = malloc(sizeof (*map) * nbLigne);

    for (int i = 0; i < nbLigne; ++i) {
        map[i] = malloc(sizeof(**map) * nbColonne);
    }



    for (int i = 0; i < nbLigne; ++i) {

        for(int j = 0; j < nbColonne; j++){

            map[i][j] = rand() % 3 + 1;

        }

    }

    int comp_map = 0;

    while(1){

        //printf("while");

        int x = rand() %  29 + 0 ;
        int y = rand() %  24 + 0 ;

        if(map[x+1][y] != 3 && map[x][y+1] != 3 && map[x][y-1] != 3 && map[x-1][y] != 3){
            map[x][y] = 0;
            break;
        }

        comp_map++;

        if(comp_map == 2){
           // printf("compteur");

            for (int i = 0; i < nbLigne; ++i) {

                for(int j = 0; j < nbColonne; j++){

                    map[i][j] = rand() % 3 + 1;

                }

            }
        }

    }


    return map;
    
}