int removeNumpares(struct no *n){
struct no *p, *q;
if(*n==NULL){
    printf("Lista Vazia!:(");
    return 0;
}
else{
    p=*n;
    q=*n;
    for(p=*n;p!=NULL;p=p->prox){
        if(p->dado%2==0){
            if(p==*c){
                *n=(*n)->prox;
                free(p);
                return 1;
            }else{
                q->prox=p->prox;
                free(p);
                
            }
        }
    }
}
