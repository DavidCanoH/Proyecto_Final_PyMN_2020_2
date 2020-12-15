#include <stdio.h>
float numero,a = 0,b=1,c=1;
float aureon;
main(){
	printf("Ingrese el numero de la serie al que quiere llegar\n");
	scanf("%f",&numero);
	printf("1,");
	for( int i=1;i<numero;i++){
		c = a + b;
		printf("%.0f,",c);
		a = b;
		b = c;
}
		aureon = b/ a;
		printf("\n");
		printf("El numero aurion es: %f",aureon);
		
}