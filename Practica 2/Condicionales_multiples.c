#include <stdio.h>
#include <math.h>
char opcion;
int bolsa;
float operacion,numerobol,resta,variable,tarifafinal;
main(){
	printf("En que departamento quieres comprar:\nPerfumeria------------->1\nSalchichoneria--------->2\nCarniceria------------->3\nLimpieza--------------->4\n");
	scanf("%c",&opcion);
	switch(opcion){
		case '1':
				printf("Cuanto te gastaste en el departamento de perfumeria?\n");
				scanf("%f",&variable);
				operacion = variable * .20;
				resta = variable - operacion;
				printf("vas a pagar %.2f y se aplico un 20 porciento de descuento\n",resta);
				break;
		case '2':
				printf("Cuanto te gastaste en el departamento de salchichoneria?\n");
				scanf("%f",&variable);
				operacion = variable*.40;
				resta = variable - operacion;
				printf("vas a pagar %.2f y se aplico un 40 porciento de descuento\n",resta);
				break;	
		case '3':
				printf("Cuanto te gastaste en el departamento de carniceria?\n");
				scanf("%f",&variable);
				operacion = variable*.20;
				resta = variable - operacion;
				printf("vas a pagar %.2f y se aplico un 20 porciento de descuento\n",resta);
				break;	
		case '4':
				printf("Cuanto te gastaste en el departamento de limpieza?\n");
				scanf("%f",&variable);
				operacion = variable*.35;
				resta = variable - operacion;
				printf("vas a pagar %.2f y se aplico un 35 porciento de descuento\n",resta);
				break;	
	}
	printf("necesita bolsas de plastico?(se aplica un precio de valor simbolico de .10 centavos)\nSi------>1\nNo------>2\n");
	scanf("%d",&bolsa);
	if(bolsa==1){
		printf("Cuantas bolsas necesita\n");
		scanf("%f",&numerobol);
		tarifafinal = resta + (numerobol*.10);
		printf("tu tarifa final es de %.2f",tarifafinal);
	}
	else
	printf("gracias por cuidar el medio ambiente");
}