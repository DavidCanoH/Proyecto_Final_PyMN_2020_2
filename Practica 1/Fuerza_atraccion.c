#include <stdio.h>
#define g 9.8
float m, w;
main (){
	printf("Cual es la masa de la persona:\n");
	scanf("%f",&m);
	w = m * g;
	printf("La fuerza de atraccion es: %f",w);
}