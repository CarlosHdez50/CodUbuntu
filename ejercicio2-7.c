/*Ejercicio 2.7 Requiere determinar el costo de un boleto de autobus que se basa en los kilometros por recorrer y el costo por kilometro, by Carlos Hernández Carballo*/

#include <stdio.h>

float KM,CKM,Costo;

int main()
{
	printf("\n\t Escribe los kilometros por recorrer");
	scanf("%f",&KM);
	printf("\n\t Escribe el costo por kilometro");
	scanf("%f",&CKM);
	Costo=(KM*CKM);
	printf("\n\t Costo %f", Costo);
	return 0;
}
