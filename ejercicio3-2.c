/*Determinar el sueldo semanal de un trabajador con base en las horas trabajadas y el pago por hora, considerando que despues de las 40 horas se considera trabajo excedente y se paga doble
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float HT,PH,sueldo;
int main()
{
	printf("\nEscribe las horas trabajadas");
	scanf("%f",&HT);
	printf("\nEscribe el pago por hora");
	scanf("%f",&PH);
	if (HT>40){
		sueldo=(2*(HT*PH)-40*PH);
		printf("\n\tsueldo,%f",sueldo);}
	else if (HT<40){
		sueldo=(HT*PH);
		printf("\n\tsueldo,%f",sueldo);}
	return 0;	
}

