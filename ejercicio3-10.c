/*Determinar a que lugar de vacaciones puede ir una persona considerando el costo del boleto y el kilometro recorrido
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float PViaje,PKm,PMexico,PV,Acapulco,Cancun;
int main()
{
	printf("\n Escribe el costo del viaje");
	scanf("%f",&PViaje);
	printf("\n Escribe el precio por kilometro");
	scanf("%f",&PKm);
	PMexico=(PKm*750*2);
	PV=(PKm*800*2);
	Acapulco=(PKm*1200*2);
	Cancun=(PKm*1800*2);
	if (PViaje<PMexico){
		printf("\n\tPresupuesto para viaje para quedarse en la casa");}
	else if (PViaje>=PMexico){
		printf("\n\tPresupuesto para viaje para%f",PMexico);}
	else if (PViaje>=PV){
		printf("\n\tPresupuesto para viaje para%f",PV);}
	else if (PViaje>=Acapulco){
		printf("\n\tPresupuesto para viaje para%f",Acapulco);}
	else if (PViaje>=Cancun){
		printf("\n\tPresupuesto para viaje para%f",Cancun);}
	return 0;
}
