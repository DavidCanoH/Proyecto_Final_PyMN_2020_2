#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float errorRel(float va, float vn);
float f1x(float x);
float fun2(float y);
float a,b,fx,va,vn,x,xi,xa=0;
char opc;
int iteraciones = 1;
main(){
	printf("Biseccion:\nTrigonometrica------------>1\nLogaritmica--------------->2\n\n0Falsa posicion:\nTrigonometrica------------>3\nLogaritmica--------------->4\nSelecciona una opcion: ");
	scanf("%s",&opc);
	switch(opc){
		case'1':{
			a=-3;
			b=-2;		
			xi= (a+b)/2;// se hace la biseccion	
			printf("%12s %5s %14s %16s %14s\n", "Iteraciones", "a", "b", "xi", "E");
			x=(f1x(a)) * (f1x(xi));
			printf("%7d %13f\t %12f\t %12f\t \t0\n",iteraciones, a, b, xi);
			do{
			iteraciones++;
			xa=xi;
				if(iteraciones >= 2) {
				if(x>0){
					a=xi;
					xi=(a+b)/2;
					x = f1x(a) * f1x(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}
				else{
					b=xi;
					xi=(a+b)/2;
					x = f1x(b) * f1x(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}}}
			while(iteraciones<5);
			break;
			}
			case '2':{
			a=1;
			b=2;		
			xi= (a+b)/2;// se hace la biseccion	
			printf("%12s %5s %14s %16s %14s\n", "Iteraciones", "a", "b", "xi", "E");
			x=(fun2(a)) * (fun2(xi));
			printf("%7d %13f\t %12f\t %12f\t \t0\n",iteraciones, a, b, xi);
			do{
			iteraciones++;
			xa=xi;
				if(iteraciones >= 2) {
				if(x>0){
					a=xi;
					xi=(a+b)/2;
					x = fun2(a) * fun2(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,errorRel(xi,xa));}
				else{
					b=xi;
					xi=(a+b)/2;
					x = fun2(b) * fun2(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,errorRel(xi,xa));}}}
			while(iteraciones<5);
				break;
			}
			case '3':{
			a=-3;
			b=-2;		
			xi= b-((f1x(b)*(a-b))/(f1x(a)-f1x(b)));
			printf("%12s %5s %14s %16s %14s\n", "Iteraciones", "a", "b", "xi", "E");
			x=(f1x(a)) * (f1x(xi));
			printf("%7d %13f\t %12f\t %12f\t \t0\n",iteraciones, a, b, xi);
			do{
			iteraciones++;
			xa=xi;
				if(iteraciones >= 2) {
				if(x>0){
					a=xi;
					xi= b-((f1x(b)*(a-b))/(f1x(a)-f1x(b)));
					x = f1x(a) * f1x(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}
				else{
					b=xi;
					xi= b-((f1x(b)*(a-b))/(f1x(a)-f1x(b)));
					x = f1x(b) * f1x(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}}}
			while(iteraciones<5);
			
				break;
			}
			case '4':{
			a=1;
			b=2;		
			xi= b-((fun2(b)*(a-b))/(fun2(a)-fun2(b)));
			printf("%12s %5s %14s %16s %14s\n", "Iteraciones", "a", "b", "xi", "E");
			x=(fun2(a)) * (fun2(xi));
			printf("%7d %13f\t %12f\t %12f\t \t0\n",iteraciones, a, b, xi);
			do{
			iteraciones++;
			xa=xi;
				if(iteraciones >= 2) {
				if(x>0){
					a=xi;
					xi=b-((fun2(b)*(a-b))/(fun2(a)-fun2(b)));
					x = fun2(a) * fun2(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}
				else{
					b=xi;
					xi=b-((fun2(b)*(a-b))/(fun2(a)-fun2(b)));
					x = fun2(b) * fun2(xi);
					printf("%7d\t %12f\t %12f\t %12f\t %12f\n", iteraciones, a, b, xi,fabs(errorRel(xi,xa)));}}}
			while(iteraciones<5);
				break;
			}}}

		
float f1x(float x){
	float fxx;
	fxx = (2*x)*(cos(2*x))-pow((x+1),2);
	return fxx;
	}
float fun2(float y){
	float logaritmo;
	logaritmo = log(fabs(y))+(pow(y,2))-4;
	return logaritmo;
}
float errorRel(float va, float vn){
	float err;
	err = (fabs(va-vn)/va)*100;
	return err;
}