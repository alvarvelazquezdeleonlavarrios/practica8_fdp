#include<stdio.h>
#include<math.h>
#include<conio.h>
//Prog1. Regla de Correspondencia (Estructura Condicional Ternaria)

int x,y,z;

main(){
	printf("\tRegla de Correspondencia (condicional ternario)\n\n");
	printf("\ty=(4*x*x)+(2*x)+0 ; x<2\n");
	printf("\ty=(x*x)-(4*x)+20  ; x>2\n");
	printf("\nIngrese un valor para x: ");
	scanf("%d",&x);
	
	if(x==2){
		printf("Operacion no valida");
	} else {
		z = pow(x,2);
		y = x>2 ? z-(4*x)+20 : (4*z)+(2*x)+0;
	
	printf("y = %d",y);
	}
	getch();
}
