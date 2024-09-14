#include "life.h"

void main(int argc, char *argv[]){
    uint8_t result; 
    int width;
    char setDimentionNow;
    srand(time(NULL));
    printf("Hello! Welcome to Conway's Game of Life!\n");
    printf("Press [Enter] key to continue.\n");
    /*Wait for enter*/
    getchar();
    printf("I noticed you did not set a dimention when you called me, would you like to set one now?[Y/N]\n");
    result = scanf("%c", &setDimentionNow);
    errorHandleingScanf(result);
    if('Y'==setDimentionNow){
        printf("What would you like the dimention of the gameboard to be?\n");
        result = scanf("%d",&width);
        printf("Thanks!\n");
    }
    else{
        width = 64;
    }

    civilization life[(width)][width];
    int population = 0, generation = 1;
    for(uint8_t y = width; y > 0; y--){
        for(uint8_t x = 0; x < width; x++){
            result = rand();
            if(result>50){
                life[x][y].currVal = ' ';
            }
            else{
                life[x][y].currVal = '0';
                population++;
            }
            printf("%c",life[x][y].currVal);
        }
        printf("\n");
    }
    printf("Generation: %d\t\t\t\t\tPopulation:%d\n", generation,population);
    while(population>0){
        printf("\e[1;1H\e[2J");
        population = 0;
        for(int y = width; y > 0; y--){
            for(int x = 0; x < width; x++){
                
            }
        }
    }


}

void errorHandleingScanf(uint8_t result_errorHandling){
    if(1!=result_errorHandling){
        printf("ERROR: scanf failed;");
    }
}
