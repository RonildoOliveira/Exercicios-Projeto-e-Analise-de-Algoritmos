#include <stdio.h>
#include <stdlib.h>

#include "ex19.c"
#include "ex17.c"

#define LINHA 3
#define COLUNA 4

/** EXERCICIO 19 **/
int matriz [LINHA][COLUNA] = {{10 ,20 ,30 ,40},
                              {15 ,25 ,35 ,45},
                              {27 ,29 ,37 ,48}};
int num = 48;

/** EXERCICIO 17 **/
int TAM_V17 = 8;
int vet17 [] = {1,3,4,7,6,5,2,0};

int main()
{
    //printf("Hello world!\n");
    //printf(ex19(matriz, 0 , 0, num));
    printf(ex17(vet17, 0, TAM_V17-1));
    return 0;
}
