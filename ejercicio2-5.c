/*Ejercicio 2.5 Determinar cuanto cobrar por trabajos de pintura, se calcula el cobro por m2,
 * By Carlos Hernández Carballo*/

#include <stdio.h>

float M2,Precio,Cobro;
int main()
{
	printf("\n\t Escribe los metros cuadrados a pintar");
	scanf("%f",&M2);
	printf("\n\t Escribe el precio por metro cuadrado");
	scanf("%f",&Precio);
	Cobro=(M2*Precio);
	printf("\n\t Cobro %f", Cobro);
	return 0;
}
