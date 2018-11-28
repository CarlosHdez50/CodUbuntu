/*Realice un algoritmo para determinar si una persona puede votar con base en su edad en las proximas elecciones
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int edad;
int main()
{
	printf("\nEscribe tu edad");
	scanf("%d",&edad);
	if (edad>=18)
		printf("\nPuede votar");
	else
	if (edad<18)
		printf("\nNo puede votar");
	return 0;

}

