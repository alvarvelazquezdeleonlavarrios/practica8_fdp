#include<stdio.h>
#include<math.h>
#include<conio.h>

//Prog4. Regla de Correspondencia (Estructura if-else anidado)

int x,y,z;

main(){
	printf("\tRegla de Correspondencia (estructura else-if)\n\n");
	printf("\ty=(4*x*x)+(2*x)+0 ; x<2\n");
	printf("\ty=(x*x)-(4*x)+20  ; x>2\n");
	printf("\nIngrese un valor para x: ");
	scanf("%d",&x);
	
	if(x>2){
		z=pow(x,2);
		y=z-(4*x)+20;
		printf("y= %d",y);
	} else if (x<2) {
		z=pow(x,2);
		y=(4*z)+(2*x)+0;
		printf("y= %d",y);
	} else {
		printf("Operacion no valida");
	}
	
	getch();
	
}
