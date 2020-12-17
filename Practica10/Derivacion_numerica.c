#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float adelante2Terminos ( float h);
float atras2Terminos ( float h);
float centra4Terminos ( float h);

int  main () {
	int op;
    float h;
	printf ("1) Adelante con 2 terminos O (h ^ 2)\n");
	printf ("2) Atras con 2 terminos O (h ^ 2)\n");
	printf ("3) Diferenciacion centrada con los 4 terminos definidos O (h ^ 4)\n");
	scanf ("%d",&op);
	switch (op)
    {
    case  1 : {printf ("ingresa el valor del incremento:" );
    scanf ("%f",&h);
    		  adelante2Terminos (h);
			  break;}
	case  2 :{ printf ( "ingresa el valor del incremento " );
	   scanf ( " % f " , & h);
	   		  atras2Terminos (h);
          	  break; }
	case  3 : {printf ( " ingresa el valor del incremento " );
	          scanf ( " % f " , & h);
	          centra4Terminos (h);
		      break ;
	    }
	}
}

    float  adelante2Terminos ( float h)
{
	float x1, x2, fx, fx2, fx1, fxi, xi = 0.6 ;
	x1 = xi + h;
	x2 = x1 + h;
	fxi = 1 + exp (-xi / 0.2 );
	fx1 = 1 + exp (-x1 / 0.2 );
	fx2 = 1 + exp (-x2 / 0.2 );
	fx = (- fx2 + 4 * fx1- 3 * fxi) / ( 2 * h);
	printf ("%f\n",fx);
}

float  atras2Terminos ( float h)
{
	float x1, x2, fx, fx2, fx1, fxi, xi = 0.6 ;
	x1 = xi-h;
	x2 = x1-h;
	fxi = 1 + exp (-xi / 0.2 );
	fx1 = 1 + exp (-x1 / 0.2 );
	fx2 = 1 + exp (-x2 / 0.2 );
	fx = ( 3 * fxi- 4 * fx1 + fx2) / ( 2 * h);
	printf ("%f\n",fx);
}

float  centra4Terminos ( float h)
{
	float x1, x2, xi1, xi2, fx, fx2, fx1, fxi, fxi1, fxi2, xi = 0.6 ;
	x1 = xi-h;
	x2 = x1-h;
	xi1 = xi + h;
	xi2 = x1 + h;
	fxi = 1 + exp (-xi / 0.2 );
	fx1 = 1 + exp (-x1 / 0.2 );
	fx2 = 1 + exp (-x2 / 0.2 );
	fxi1 = 1 + exp (-xi1 / 0.2 );
	fxi2 = 1 + exp (-xi2 / 0.2 );
	fx = (- fxi2 + 8 * fxi1- 8 * fx1 + fx2) / ( 12 * h);
	printf ("%f\n",fx);
}