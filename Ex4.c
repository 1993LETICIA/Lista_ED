int soma(int v[], int tam){
    if(t == 0) 
        return 0;
    else
        return v[t - 1] + soma(v, t - 1); 
}

int main () {

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Soma: %d\n", soma(vet, 10));

    return 0;
}
