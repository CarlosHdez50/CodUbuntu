/*Ejercicio 2.8 Determinar el tiempo que tarda una persona en un viaje de bicicleta, considerando que lleva una velocidad constante, By Carlos Hernández Carballo*/

#include <stdio.h>

float Km,V,T;

int main()
{
	printf("\n\t Escribe los kilometros del viaje");
	scanf("%f",&Km);
	printf("\n\t Escribe la velocidad constante");
	scanf("%f",&V);
	T=(Km*V);
	printf("\n\t T %f", T);
	return 0;
}
