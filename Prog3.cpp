#include<stdio.h>
#include<stdlib.h> /* Funci�n System() */
#include<ctype.h> /* Funci�n Tolower() */
#include<conio.h>
//Prog2. Men� Altas-Bajas (variable char)

char x;
int op;

main(){
	
	do {
		system("cls");
		fflush(stdin);  //Se utiliza para limpiar todas las variables!!!
		puts("\tMenu Altas-Bajas");
		puts("a).- Altas");
		puts("b).- Bajas");
		puts("c).- Cambios");
		printf("Seleccione una opcion: ");
		scanf("%c",&x);
		x=tolower(x);
	
		switch(x){
			case 'a':
			//	system("cls");
				printf("\nSelecciono Altas\n");
				break;
			case 'b':
			//	system("cls");
				printf("\nSelecciono Bajas\n");
				break;
			case 'c':
			//	system("cls");
				printf("\nSelecciono Cambios\n");
				break;
			default:
			//	system("cls");
				printf("\nOpcion no valida\n");
				break;
		}
	
		puts("1) Si");
		puts("0) No");
		printf("Volver al menu principal: ");
		scanf("%d",&op);
	
	} while (op==1);
	
	system("cls");
	printf("Hasta pronto");
	
	getch();
}
