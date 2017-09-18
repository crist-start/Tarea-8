#include <stdio.h>

int main(){
	
	printf("Formacion de un cuadrado\n");
	int j=0;
	int k=0;
	int c=0;
	printf("Escribe un numero mayor a 0:\n");
	scanf("%d",&c);
	if(c>=1){	
		for(j=1; j<=c; j=j+1){
			for(k=1; k<=c; k=k+1){
				printf("+");
			}
			printf("\n");
		}
	}else{
		printf("El numero debe ser mayor que 0");
	}
	printf("\nFin del programa");
}
