/*Se dara un bono de antiguedad a los empleados de una tienda
 * by Carlos Hernández Carballo*/
#include <stdio.h>
char Nombre[20];
int Antiguedad,Bono;
int main()
{
	printf("\n Escribe tu nombre");
	scanf("%s",Nombre);
	printf("\n Escribe tu antiguedad trabajando");
	scanf("%d",&Antiguedad);
	if (Antiguedad>5){
		printf("\n\tTu bono es de 1000%s",Nombre);}
	else if (Antiguedad>4 && Antiguedad<=5){
		printf("\n\tTu bono es de 500%s",Nombre);}
	else if (Antiguedad>3 && Antiguedad<=4){
		printf("\n\tTu bono es de 400%s",Nombre);}
	else if (Antiguedad>2 && Antiguedad<=3){
		printf("\n\tTu bono es de 300%s",Nombre);}
	else if (Antiguedad>1 && Antiguedad<=2){
		printf("\n\tTu bono es de 200%s",Nombre);}
	else if (Antiguedad>0 && Antiguedad<=1){
		printf("\n\tTu bono es de 100%s",Nombre);}	
	return 0;
}
