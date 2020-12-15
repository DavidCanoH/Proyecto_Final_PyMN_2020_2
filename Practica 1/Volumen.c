#include <stdio.h>
#include <math.h>

#define Pi 3.1416
#define frac 1.3333
float radio;
float vol;
main() {
	printf("Dame el valor del radio\n");
	scanf("%f",&radio);
	vol = frac * Pi * pow(radio,3);
	printf("El volumen del circulo es: %f" ,vol);
}
