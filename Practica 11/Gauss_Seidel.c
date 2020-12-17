#include <stdio.h>
float A[3][3]={{10,2,-1},{-3,-6,2},{1,1,5}};
float b[3]={27,-61.5,-21.5};
float x1,x2,x3;
int i,j;
int main(){

	for(i=0;i<4;i++){
	if(i==0){
	
	x1=b[0]/A[0][0];
	x2=(-A[1][0]*x1 -A[1][2]*x3 +b[1])/A[1][1];
	x3=(-A[2][0]*x1 -A[2][1]*x2 +b[2])/A[2][2];
	printf("Valor de x_1 en iteracion 1: %f\n",x1);
	printf("Valor de x_2 en iteracion 1: %f\n",x2);
	printf("Valor de x_3 en iteracion 1: %f\n",x3);}

	else{
	x1=(-A[0][1]*x2 -A[0][2]*x3 +b[0])/A[0][0];
	x2=(-A[1][0]*x1 -A[1][2]*x3 +b[1])/A[1][1];
	x3=(-A[2][0]*x1 -A[2][1]*x2 +b[2])/A[2][2];
		
	printf("Valor de x_1 en iteracion %d: %f\n",i+1,x1);
	printf("Valor de x_2 en iteracion %d: %f\n",i+1,x2);
	printf("Valor de x_3 en iteracion %d: %f\n",i+1,x3);
	}
}
}