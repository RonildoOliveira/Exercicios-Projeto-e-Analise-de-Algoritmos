
int ex17(int v[], int ini, int fim){
    int meio =  (ini + fim)/2;

    //1 element

    if(ini == fim){
        printf("%d", v[ini]);
        return v[ini];
    }
    else {
        if(v[meio] > v[meio+1]){
            ex17(v, ini, meio);
        }else{
            ex17(v, meio+1, fim);
        }
    }

    return 0;
}
