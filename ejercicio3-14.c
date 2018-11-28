/*Realizar un algoritmo que con respecto a la calificacion indique la letra correspondiente
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float Calificacion;
int main()
{
	printf("\n\t Escribe tu calificacion");
	scanf("%f",&Calificacion);
	if (Calificacion>=10){
		printf("\n\tLa calificacion es A");}
	else if (Calificacion==9){
		printf("\n\tLa calificacion es B");}
	else if (Calificacion==8){
		printf("\n\tLa calificacion es C");}
	else if(Calificacion==7 && Calificacion==6){
		printf("\n\tLa calificacion es D");}
	else if(Calificacion<=5){
		printf("\n\tLa calificacion es F");}
	return 0;
}
