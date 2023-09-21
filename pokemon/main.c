#include <stdio.h>
#include <stdlib.h>
#include "signature/signature.h"
#include <time.h>


int main() {

    srand(time(NULL));

    int **amap = createMap();


    for (int i = 0; i < 30; ++i) {

        for(int j = 0; j < 25; j++){

            printf("%d ", amap[i][j]);
        }
        printf("\n");
    }



    return 0;
}
