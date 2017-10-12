#include<stdio.h>
#include<stdlib.h> /* Función System() */
#include<conio.h>
//Prog2. Menú Altas-Bajas (variable int)

int x,op;

main(){
	
	do {
		system("cls");
		puts("\tMenu Altas-Bajas");
		puts("1).- Altas");
		puts("2).- Bajas");
		puts("3).- Cambios");
		printf("Seleccione una opcion: ");
		scanf("%d",&x);
	
		switch(x){
			case 1:
			//	system("cls");
				printf("\nSelecciono Altas\n");
				break;
			case 2:
			//	system("cls");
				printf("\nSelecciono Bajas\n");
				break;
			case 3:
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
