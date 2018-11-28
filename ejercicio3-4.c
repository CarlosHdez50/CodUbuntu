/*Determinar el cobro de un estacionamiento dependiendo de las tarifas
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int Horas,Tarifa;
int main()
{
	printf("\n Escriba las horas en el estacionamiento");
	scanf("%d",&Horas);
	if (Horas>10){
		Tarifa=Horas*2;
		printf("\n\tTarifa,%d",Tarifa);}
	else if (Horas>5 && Horas<=10){
		Tarifa=Horas*3;
		printf("\n\tTarifa,%d",Tarifa);}
	else if (Horas>=3 && Horas<=5){
		Tarifa=Horas*4;
		printf("\n\tTarifa,%d",Tarifa);}
	else {
		Tarifa=Horas*5;
		printf("\n\tTarifa,%d",Tarifa);}
	return 0;
}
