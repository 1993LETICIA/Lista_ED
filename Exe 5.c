#include <stdio.h>
void decBin(int n){
	printf("decBin(%d)\n", n); getch();
	if(n==0){
		printf("\nCaso base \n");
		return ;
	}
	decBin(n/2);
	printf("%d",n%2); getch();
	
}
int main(){
	int num;
	printf("Numero:\n");
	scanf("%d", num);
	decBin(num);
	return 0;
}
