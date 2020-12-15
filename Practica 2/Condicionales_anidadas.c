#include <stdio.h>
#include <math.h>
int estado,dinero, operacion, tarifa_final;
main(){
	printf("Cual es tu estado civil?\n Soltero---------->1         Casado---------->2\n");
	scanf("%d",&estado);
	printf("Cual es tu ganancia mensual?\n");
	scanf("%d",&dinero);
	if(estado == 1){
		if(dinero>=32000){
			operacion =dinero*0.25;
			tarifa_final = dinero - operacion;
			printf("Tu tarifa final es: %d, pagaste el 25 porciento",tarifa_final);
		}
		else{
			operacion =dinero*0.10;
			tarifa_final = dinero - operacion;
			printf("Tu tarifa final es: %d, pagaste el 10 porciento",tarifa_final);
		}
	}
	else{
		if(dinero >= 64000){
			operacion =dinero*0.25;
			tarifa_final = dinero - operacion;
			printf("Tu tarifa final es: %d, pagaste el 25 porciento",tarifa_final);
		}
		else{
			operacion =dinero*0.10;
			tarifa_final = dinero - operacion;
			printf("Tu tarifa final es: %d, pagaste el 10 porciento",tarifa_final);
		}
	}
} 