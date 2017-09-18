#include <stdio.h>

int main(){
	
	int j=0;
	int m=0;
	int n=0;
	
	printf("Escribe un numero:\n");
	scanf("%d",&n);
	printf("Escribe un numero mayor al primero\n:");
	scanf("%d",&m);
	printf("Tablas de multiplicar del numero %d al %d\n==========\n",n,m);
	for(n=n; n<=m; n=n+1){
		for(j=1; j<=10; j=j+1){
			printf("%dx%d=%d\n",n,j,n*j);
		}
		printf("==========\n");
	}
	printf("\nFin del programa");
}
