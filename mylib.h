/*Calcular el área de un triángulo, By Carlos Hernández Carballo*/
#include <stdio.h>

#define ZERO 100
#define OK_FLAG 0
#define ERR_FLAG -1

float Base,Altura,Area;
int leerOperadores()
{

	printf("\n\tIngresar la base del triangulo");
	scanf("%f",&Base);
	  printf("\n\tIngresar la altura");
	scanf("%f",&Altura);

	return OK_FLAG;
}
int Calculararea()
{
	Area=(Base * Altura)/2;
	return OK_FLAG;

}
int Resultado()
{
	printf("\n\tArea %f", Area);
}
