/*Becas Universitarios mediante promedio y edad
 * By Carlos Hernández Carballo*/
#include <stdio.h>
char Nombre[20];
int Edad;
float P;
int main()
{
	printf("\n Escribe tu Nombre");
	scanf("%s",Nombre);
	printf("\n Escribe tu edad");
	scanf("%d",&Edad);
	printf("\n Escribe tu promedio");
	scanf("%f",&P);
	if (Edad>18  && P>=9){
		printf("\n\tTu Beca es de 2000%s",Nombre);}
	else if (Edad>18 && P>=7.5){
		printf("\n\tTu Beca es de 1000%s",Nombre);}
	else if (Edad>18 && P>=6){
		printf("\n\tTu Beca es de 500%s",Nombre);}
	else if (Edad>18 && P<6){
		printf("\n\tCarta Invitacion a mejorar,%s",Nombre);}
	else if (Edad<=18 && P>=9){
		printf("\n\tTu Beca es de 3000%s",Nombre);}
	else if (Edad<=18 && P>=8){
		printf("\n\tTu Beca es de 2000%s",Nombre);}
	else if (Edad<=18 && P>=6){
		printf("\n\tTu Beca es de 100%s",Nombre);}
	else {
		printf("\n\tCarta Invitacion a mejorar,%s",Nombre);}
	return 0;
}
