/*Unos almumnos desean realizar un viaje de curso pero requieren saber cuanto costara el pasaje respecto a los alumnos que asistan*
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int c1=20;
int c2=35;
int c3=40;
int c4=70;
int Alumnos;
float Costo;
int main()
{
	printf("\n\tEscriba cuantos alumnos iran");
	scanf("%d",&Alumnos);
	if (Alumnos>=100)
		Costo=(Alumnos*c1);
	else if (Alumnos>=50)
		Costo=(Alumnos*c2);
	else if (Alumnos>=20)
       		Costo=(Alumnos*c3);
	else if (Alumnos<20)
		Costo=(Alumnos*c4);
	printf("\n\tEl costo sera de%f",Costo);	
	return 0;
}
