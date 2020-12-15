#include <stdio.h>
#include <math.h>
int a, b, c;
float x1, x2, operacion;

main(){
	printf("cual es el valor de a\n");
	scanf("%d",&a);
	printf("cual es el valor de b\n");
	scanf("%d",&b);
	printf("cual es el valor de c\n");
	scanf("%d",&c);
	
	operacion = sqrt(pow(b,2)-(4*a*c));
	x1 = (-b+operacion)/2*a;
	x2 = (-b-operacion)/2*a;
	
	if(operacion>=0){
		printf("Las raices son: x1= %.2f y x2= %.2f",x1,x2);
	}
	else{
		printf("ERROR: La solucion no son numeros reales");
	}
}