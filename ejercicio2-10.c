/*Ejercicio 2.10 Determinar el pago del agua que tiene una persona en metros cubicos  que consume de agua, by Carlos Hernández Carballo*/

#include <stdio.h>

float CM,M2,Pago;

int main()
{
	printf("\n\t Escribe el costo por metro cubico");
	scanf("%f",&CM);
	printf("\n\t Escribe el total de metros cubicos");
	scanf("%f",&M2);
	Pago=(CM*M2);
	printf("\n\t Pago %f", Pago);
	return 0;
}
