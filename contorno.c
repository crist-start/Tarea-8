#include <stdio.h>

int main(){
	printf("Formacion de un cuadrado vacio\n");
	int j=0;
	int k=0;
	int c=0;
	printf("Escribe un numero mayor a 2:\n");
	scanf("%d",&c);
	if(c>=3){
		for(j=1; j<=c; j=j+1){
			if(j==1){
				for(k=1; k<=c; k=k+1){
					printf("+");
				}
			}
			if(j>=2&&j<=c-1){
				for(k=1; k<=c; k=k+1){
					if(k==1){
						printf("+");
					}
					if(k>=2&&k<=c-1){
						printf(" ");
					}
					if(k==c){
						printf("+");
					}
				}
			}
			if(j==c){
				for(k=1; k<=c; k=k+1){
					printf("+");	
				}
			}
			printf("\n");
		}
	}else{
		printf("El numero debe ser mayor a 2");
	}
	printf("\nFin");
}
