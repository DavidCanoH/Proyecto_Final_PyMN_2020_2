#include <stdio.h>
#include <math.h>
float fun(float x);
float funDe(float y);
float fun2(float z);
float fun2De(float t);
float f,fp,xi,tol,n,fx,fpx,i,error,x;
main(){
    xi=0.3;
    printf("Ingrese el numero maximo de iteraciones permitidas: ");
    scanf("%f",&n);
    fx=fun(xi);
    fpx=funDe(xi);   
    i=1;
    error=tol+1;
   printf("\nn         x         f(x)         fp(x)          \n");
    while  (i<=n && fx!=0 && error>tol && fpx!=0){
        x = xi-(fx/fpx);
        fx=fun(x);
        fpx=funDe(x);
        printf("%1.0f   %10.10f %10.10f %10.10f \n",i,x,fun(x),funDe(x));
        error=fabs(x-xi);
        xi=x;
        i=i+1;}
    printf("\n\n");    
	xi=0.3;
    printf("Ingrese el numero maximo de iteraciones permitidas: ");
    scanf("%f",&n);
    fx=fun2(xi);
    fpx=fun2De(xi);   
    i=1;
    error=tol+1;
    printf("\n n         x        f(x)         fp(x)          \n");
    while  (i<=n && fx!=0 && error>tol && fpx!=0){
        x = xi-(fx/fpx);
        fx=fun2(x);
        fpx=fun2De(x);
        printf("%1.0f %10.10f %10.10f %10.10f \n",i,x,fun2(x),fun2De(x));
        error=fabs(x-xi);
        xi=x;
        i=i+1;  
 
         }}	
float fun(float x){
	float a;
	a= (8*sin(x)*exp(-x)-1);
	return a;
}
float funDe(float y){
	float b;
	b=(8*cos(y)*exp(-y)-1)-(8*sin(y)*exp(-y)-1);
	return b;
}
float fun2(float z){
	float c;
	c= (2*pow(z,3))-(11*pow(z,2))+(17.7*z)-5;
	return c;
}
float fun2De(float t){
	float d;
	d = 6*pow(x,2)-(22*x)+17.7;
	return d;
