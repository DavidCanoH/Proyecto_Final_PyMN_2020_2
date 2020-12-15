#include <stdio.h>
int digito1, digito2, digito3, digito4,valido;
main(){
	printf("ingresa un numero de 4 digitos que no se repitan");
	printf("ingresa digito 1\n");
	scanf("%d",&digito1);
	printf("ingresa digito 2\n");
	scanf("%d",&digito2);
	printf("ingresa digito 3\n");
	scanf("%d",&digito3);
	printf("ingresa digito 4\n");
	scanf("%d",&digito4);
	
	do{
		if(digito1 != digito2 || digito1 != digito3){
			if (digito2 != digito3 || digito2!=digito4){
				if(digito3 != digito4 ){
					if(digito4!=digito1)
							printf("Codigo valido\n");}}}
			else{
				printf("Codigo invalido\n");
				}
				
		printf("Presione 1 para otra vez\nPresione 0 para salir\n");
				scanf("%d",&valido);	
}
		while(valido ==1);
		
		return 0;
}