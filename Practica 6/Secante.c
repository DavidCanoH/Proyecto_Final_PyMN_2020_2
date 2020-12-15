#include <stdio.h>
#include <math.h>
float f(float x);
float f2(float y);
main(){
	char salir;
	int n,nmax;
	float x0,x1,x2,tol;
	
		printf("\nInglresar el valor x_0: ");
		scanf("%f",&x0);
		printf("\nInglresar el valor x_1: ");
		scanf("%f",&x1);
		printf("\nInglresar tolerancia: ");
		scanf("%f",&tol);
		printf("\nNumero de interaciones: ");
		scanf("%f",&nmax);
		n=1;
		while(fabs(x1-x0)>tol*(fabs(x1)+1)&&n<nmax){
			x2=x1-(f(x1)*(x0-x1))/(f(x0)-f(x1));
			x0=x1;
			x1=x2;
			printf("%d\t %f \n",n,x2);
			n++;
		}
		printf("\nInglresar el valor x_0: ");
		scanf("%f",&x0);
		printf("\nInglresar el valor x_1: ");
		scanf("%f",&x1);
		printf("\nInglresar tolerancia: ");
		scanf("%f",&tol);
		printf("\nNumero de interaciones: ");
		scanf("%f",&nmax);
		n=1;
		while(fabs(x1-x0)>tol*(fabs(x1)+1)&&n<nmax){
			x2=x1-(f2(x1)*(x0-x1))/(f2(x0)-f2(x1));
			x0=x1;
			x1=x2;
			printf("%d\t %f \n",n,x2);
			n++;
		}
	
}
float f(float x){
return (8*sin(x)*exp(-x)-1);
}
float f2(float y){
	return (2*pow(y,3))-(11*pow(y,2))+(17.7*y)-5;
}