/*Ejercicio 2.6 Se requiere determinar la hipotenusa de un triángulo, By Carlos Hernández Carballo*/

#include <stdio.h>

float L1,L2,Hip;

int main()
{
	printf("\n\t Escribe el lado 1 del triángulo");
	scanf("%f",&L1);
	printf("\n\t Escribe el lado 2 del triángulo");
	scanf("%f",&L2);
	Hip=(L1*L1)+(L2*L2);
	printf("\n\t Hip %f", Hip);
	return 0;
}
