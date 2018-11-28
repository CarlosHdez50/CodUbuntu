/*Determinar el sueldo de un trabajador con base en sus horas trabajadas y su pago por hora
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float PHora,HTrabajadas,Sueldo;
char Nombre[20];
int main()
{
	printf("\n Escribe tu nombre");
	scanf("%s",Nombre);
	printf("\n Escribe el pago por hora");
	scanf("%f",&PHora);
	printf("\n Escribe las horas trabajadas");
	scanf("%f",&HTrabajadas);
	if (HTrabajadas>46 && HTrabajadas<=50)
		Sueldo=HTrabajadas*(PHora*3);
	else if (HTrabajadas<46 && HTrabajadas>=41)
		Sueldo=HTrabajadas*(PHora*2);
	else if (HTrabajadas<41) 
		Sueldo=(HTrabajadas*PHora);
	printf("\n El sueldo es %f,%s",Sueldo,Nombre);
	return 0;
}
