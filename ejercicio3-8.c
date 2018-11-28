/*Bono mensual a sus trabajadores dependiendo del año de antiguedad o bien por el monto del sueldo
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int A;
float Sueldo,BonoA,BonoS;
int main()
{
	printf("\n Escribe los años de antiguedad");
	scanf("%d",&A);
	printf("\n Escribe el sueldo");
	scanf("%f",&Sueldo);
	if (A>=2 && A<5){
		BonoA=(Sueldo*1.20);
		printf("\n\t El bono de año es%f",BonoA);}
	else if (A>=5){
		BonoA=(Sueldo*1.30);
		printf("\n\t El bono de año es%f",BonoA);}
	else {
		BonoA=0;
		printf("\n\t El bono de año es%f",BonoA);}
	if (Sueldo<1000){
		BonoS=(Sueldo*1.25);
		printf("\n\t El bono de Sueldo es%f",BonoS);}
	else if (Sueldo>1000 && Sueldo<=3500){
		BonoS=(Sueldo*1.15);
		printf("\n\t El bono de Sueldo es%f",BonoS);}
	else if (Sueldo>3500){
		BonoS=(Sueldo*1.10);
		printf("\n\t El bono de Sueldo es%f",BonoS);}
	return 0;
}

