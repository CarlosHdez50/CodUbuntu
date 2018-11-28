/*Ejercicio 2.3 Requiere determinar la edad de las personas que solicitan trabajo, pero cuando los   entrevistan solo se les pregunta el año que nacieron, By Carlos Hernández Carballo*/

#include <stdio.h>

float A,AC,Edad;

int main()
{
	printf("\n\t Escribe el año actual");
	scanf("%f",&AC);
	printf("\n\t Escribe el año en que nacieron");
	scanf("%f",&A);
	Edad=(AC-A);
	printf("\n\tEdad,%f", Edad);
	return 0;
}
