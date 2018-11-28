/*Calcular el área de un triangulo
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float Base,Altura,Area;
int main()
{
	printf("\n Escribe la medida de la base");
	scanf("%f",&Base);
	printf("\n Escribe la medida de la Altura");
	scanf("%f",&Altura);
	Area=(Base*Altura)/2;
	printf("\n El area es%f",Area);
	return 0;
}
