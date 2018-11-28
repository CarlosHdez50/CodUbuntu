/*Realice un algoritmo que con un numero proporcione el dia de la semana
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int Numero;
int main()
{
	printf("Escribe un numero del 1 al 7");
	scanf("%d",&Numero);
	if (Numero<1)
		printf("\n\tNo hay día");
	else if (Numero==1)
		printf("\n\tLunes");
	else if (Numero==2)
		printf("\n\tMartes");
	else if (Numero==3)
		printf("\n\tMiercoles");
	else if (Numero==4)
		printf("\n\tJueves");
	else if (Numero==5)
		printf("\n\tViernes");
	else if (Numero==6)
		printf("\n\tSabado");
	else if (Numero==7)
		printf("\n\tDomingo");
	else if (Numero>7)
		printf("\n\tNo existe");
	return 0;
}
