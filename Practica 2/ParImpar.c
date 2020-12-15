#include <stdio.h>

int numero; //Numero entero que voy a leer
//int residuo; // Residuo de divdir entre 2 mi Numero

int main() {
  printf("Por favor ingresa un numero entero\n");
  scanf("%d",&numero);
  //residuo = numero%2;
  //if (residuo==0) {
  if(numero%2==0){ 
    printf("El numero que ingresaste es par\n");
  }
  else {
    printf("El numero es impar\n");
  }

}
