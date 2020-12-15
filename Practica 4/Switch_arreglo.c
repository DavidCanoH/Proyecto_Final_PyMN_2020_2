#include <stdio.h>
#include <math.h>
#include <stdlib.h>
char opc;
int variable,suma,i,j,k;
int x[50],y[50],z[50];
int matrizA[3][3],matrizB[3][3];
int funcion4_1(int arreglo);
int funcion4_2(int arreglo);
int funcion4_3(int arreglo);
int funcion4_4(int arreglo);
int funcion4_5(int arreglo);
int funcion4_6(int arreglo);
int funcion4_7(int arreglo);
int funcion4_8(int arreglo);
	main(){
	printf("1)Ingresar dos arreglos\n2)Generar arreglo aleatorio\n3)Suma de dos arreglos\n4)Suma todos los elementos de un arreglo\n5)Llenar matriz cuadrada\n6)Llenar matriz cuadrada con numeros aleatorios\n7)Suma de matriz cuadrada\n8)Multiplicacion de matrices\n9)salir\nSelecciona una opcion:");
	scanf("%s",&opc);
	switch(opc){	
	case '1':{
		printf("ingrese el tamanio de los arreglos: ");
    	scanf("%d",&variable);
		funcion4_1(variable);
		break;}
	case '2':{
		printf("ingrese el tamanio de los arreglos: ");
    	scanf("%d",&variable);
		funcion4_2(variable);
		break;}
	case '3':{
		printf("ingrese el tamanio de los arreglos: ");
    	scanf("%d",&variable);
		funcion4_3(variable);
		break;}
	case '4':{
		printf("ingrese el tamanio de los arreglos: ");
   		scanf("%d",&variable);
		funcion4_4(variable);
		break;}
	case '5':{
   		funcion4_5(variable);
		break;}
	case '6':{
		funcion4_6(variable);
		break;}
	case '7':{
		funcion4_7(variable);
		break;}
	case '8':{
		funcion4_8(variable);
		break;}
	}
}
/////////////////////////////////////////////////////////
	int funcion4_1(int arreglo){ //FUNCION 1
 	printf("Elementos del arreglo A:\n");
	for(i=0;i<variable;i++){
	printf("Elemento: ");
	scanf("%d",&x[i]);}
	printf("Los elementos del arreglo B:\n");
	for(i=0;i<variable;i++){
	printf("Elemento: ");
	scanf("%d",&y[i]);}
	printf("El arreglo A es: ");
	for(i=0;i<variable;i++)
 	{printf("%d\t",x[i]);}
 	printf("\nEl arreglo B es: ");
 	for(i=0;i<variable;i++)
 	{printf("%d\t",y[i]);}}
	//////////////////////////////////////////////////////
	int funcion4_2(int arreglo){ // FUNCION 2
 	printf("Elementos del arreglo A:\n");
	for(i=0;i<variable;i++){
	printf("Elemento [%d]:%d\n",i,x[i]=rand()%11);}
	printf("Los elementos del arreglo B:\n");
	for(i=0;i<variable;i++){
	printf("Elemento [%d]:%d\n",i,y[i]=rand()%11);}
	printf("El arreglo A es: ");
	for(i=0;i<variable;i++)
 	{printf("%d\t",x[i]);}
 	printf("\nEl arreglo B es: ");
 	for(i=0;i<variable;i++)
 	{printf("%d\t",y[i]);}}	
 /////////////////////////////////////////////////////////
	int funcion4_3(int arreglo){ // FUNCION 3
    printf("Ingrese el arreglo 1: \n");
    for(int i=0;i<variable;i++){
        printf("Elemento: ");
		scanf("%d",&x[i]);}
    printf("Ingrese el arreglo 2 \n");
    for(int i=0;i<variable;i++){
        printf("Elemento: ");
		scanf("%d",&y[i]);}
    printf("la suma es: \n");
    for(int i=0;i<variable;i++){
        z[i]= x[i] + y[i];
        printf("%d\t",z[i]);}}
//////////////////////////////////////////////////////////
	int funcion4_4(int arreglo){ //FUNCION 4
 	printf("Elementos del arreglo A:\n");
	for(i=1;i<=variable;i++){
	printf("Elemento [%d]:",i);
	scanf("%d",&x[i]);
	suma = suma + x[i];}
	printf("%d",suma);}
//////////////////////////////////////////////////////////
	int funcion4_5(int arreglo){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Introduce el numero para formar la matriz: [%d][%d]: ",i+1,j+1,"\n");
			scanf("%d",&matrizA[i][j]);}}
		printf("\tMatriz Ordenada:");
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
				printf("%5d",matrizA[i][j]);}}}
//////////////////////////////////////////////////////////
	int funcion4_6(int arreglo){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			matrizA[i][j]=rand()%20;
			printf("Introduce el numero para formar la matriz: [%d][%d]: %d ",i+1,j+1,matrizA[i][j]);
			printf("\n");}}
		printf("\tMatriz Ordenada:");
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
				printf("%5d",matrizA[i][j]);}}}
////////////////////////////////////////////////////////////////
	int funcion4_7(int arreglo){
		printf("Se llena la matriz 1\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("ingresar numero [%d][%d]: ",i+1,j+1);
				scanf("%d",&matrizA[i][j]);}}
				
		printf("\nSe llena la matriz 2\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("ingresar numero [%d][%d]: ",i+1,j+1);
				scanf("%d",&matrizB[i][j]);}}
			
		printf("Matriz 1 Ordenada:");
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
				printf("%5d",matrizA[i][j]);}}
					
		printf("\nMatriz 2 Ordenada:");
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
				printf("%5d",matrizB[i][j]);}}
				
			printf("\nLa suma de las matrices es:");
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("%5d",matrizA[i][j] + matrizB[i][j]);}}}
//////////////////////////////////////////////////////////////////////////
		int funcion4_8(int arreglo){
			int A[3][3] ={{0}};
			int B[3][1] ={{0}}; 
			int R[3][1]; 
			printf("Se llena la matriz 1\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("ingresar numero [%d][%d]: ",i+1,j+1);
					scanf("%d",&A[i][j]);}}
			printf("\nSe llena la matriz 2\n");
			for(i=0;i<3;i++){
				for(j=0;j<1;j++){
					printf("ingresar numero [%d][%d]: ",i+1,j+1);
					scanf("%d",&B[i][j]);}}
			printf("\nMatriz 1 Ordenada:");
			for(i=0;i<3;i++){
				printf("\n");
					for(j=0;j<3;j++){
						printf("%5d",A[i][j]);}}	
			printf("\nMatriz 2 Ordenada:");
			for(i=0;i<3;i++){
				printf("\n");
					for(j=0;j<1;j++){
						printf("%5d",B[i][j]);}}
			printf("\nLa multipliacacion es:");
			for(k=0;k<1;k++){
    	 		for(i=0;i<3;i++){
      				suma = 0;
     	      		for(j=0;j<3;j++){
     		   		suma += A[i][j]*B[j][k];}
    			  	R[i][k] = suma;
   				  	printf("%d\t",R[i][k]);}}}