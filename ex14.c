int ex14(int X[], int ini_x, int fim_x,
         int Y[], int ini_y, int fim_y){
    int meio_x =  (ini_x + fim_x)/2;
    int meio_y =  (ini_y + fim_y)/2;

    // significa que Y tem um elemento
    if(ini_y == fim_y){
        if(X[ini_x] == Y[ini_y]){
            printf("%d",X[ini_x+2]);
            return X[ini_x+2];
        }else{
            printf("%d",X[ini_x+1]);
            return X[ini_x+1];
        }
    }

    if(X[meio_x] == Y[meio_y]){
    //solucao esta na direita
        ex14(X, meio_x+1, fim_x,
             Y, meio_y+1, fim_y);

    }else{
    //solucao esta na esquerda
        ex14(X, ini_x, meio_x,
             Y, ini_y, meio_y);
    }

    return 0;
}
