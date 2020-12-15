#include <stdio.h>
#include <math.h>

char nombre[10];
int edad;
float peso, estatura,imc;
main(){
	
	printf("Cual es tu nombre?(Sin espacios)\n");
	scanf("%s",&nombre);
	
	printf("Cual es tu edad?\n");
	scanf("%d",&edad);
	
	printf("Cual es tu peso?(En kilogramos)\n");
	scanf("%f",&peso);
	
	printf("Cual es tu estatura?(en metros)\n");
	scanf("%f",&estatura);

	imc = peso /pow(estatura,2);

	printf("Tu nombre es:%s\n Tu edad es de: %d\n Tu peso es de: %.2f\n Tu IMC es de: %.2f",nombre,edad,peso,imc);
	
}