/*Ejercicio 2.2 Determinar cuantos dolares se pueden obtener con equis cantidad de dinero mexicano, Carlos Hernández Carballo*/

#include <stdio.h>

float PM,N,D;

int main()
{
       printf("\n\t Escribe la cantidad en pesos mexicanos");
	scanf("%f",&N);
       printf("\n\t Escribe el precio del dolar");
	scanf("%f",&PM);
	D=(N/PM);
	printf("\n\tD,%f", D);
	return 0;
}	


