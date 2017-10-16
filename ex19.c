#define LINHA 3
#define COLUNA 4

int l, c;

int ex19(int mat[LINHA][COLUNA], int ini_c, int ini_l, int num)
{
    for(c = ini_c; c < COLUNA; c++){
        if(mat[ini_l][c] == num){
            printf("Encontrado");
            return 0;
        }
        else if(mat[ini_l][c] > num || (c == COLUNA - 1)){
            c--;
            ini_l++;
            ex19(mat, c, ini_l, num);
        }
        else if(ini_l == LINHA || ini_c == COLUNA){
            printf("Não Encontrado");
            return 1;
        }
    }
    return  0;
}
