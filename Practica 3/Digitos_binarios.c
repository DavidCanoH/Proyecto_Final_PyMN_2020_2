#include <stdio.h>
int residuo, numero;
main(){
	printf("Ingresa un numero entero positivo\n");
	scanf("%d",&numero);
	if(numero>0){
		printf("La conversion a binario es: ");
		residuo= numero%2;
		if(residuo == 0){
		while( numero > 0){
			if(numero%2 == 0){printf("1");}
			else{printf("0");}numero = numero/2;}
			}

		else{
			while( numero > 0){
			if(numero%2 == 0){printf("0");}
			else{printf("1");}numero = numero/2;}}}
			
				else if (numero==0){
		printf("La convercion a binario es: 0");}
		else{printf("Numero invalido\n");}
	}