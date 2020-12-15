#include <stdio.h>
#include <math.h>

float peso, estatura, imc;
main(){
	printf("Cual es tu peso?(en kilogramos))\n");
	scanf("%f",&peso);
	printf("Cual es tu estatura?(en metros)\n");
	scanf("%f",&estatura);
	
	imc = peso/ pow(estatura,2);
	 
	 if(imc>18.5){
	 	
	 	if(imc>=18.5 && imc<=24.9){
	 	
	 		printf("Tu IMC es: %f y tu estados es: Peso normal",imc);
	 	}
	 	else {
	 		if(imc>=25.0 && imc<29.9){
	 			printf("Tu IMC es: %f y tu estados es: Sobrepeso",imc);
	 		}
	 		else {
	 			if(imc>=30.0 && imc<=34.9){
	 				printf("Tu IMC es: %f y tu estados es: Obesidad tipo 1",imc);
	 			}
	 			else{
	 				if(imc>=35.0 && imc<=39.9){
	 					printf("Tu IMC es: %f y tu estados es: obesidad tipo 2",imc);
	 				}
	 				else
	 				printf("Tu IMC es: %f y tu estados es: Hiper obesidad",imc);
	 			}
	 		}
	 	}
	 }
	 else 
	 printf("Tu IMC es: %f y tu estados es: Bajo en peso",imc);
}