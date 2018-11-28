/*Se tiene el nombre y edad de tres personas, se desea saber cual es la menor y su nombre
 * By Carlos Hernández Carballo*/
#include <stdio.h>
char Nombre1[30],Nombre2[30],Nombre3[30];
int Edad1,Edad2,Edad3;
int main()
{
	printf("\n Escribe el primer nombre");
		scanf("%s",Nombre1);
	printf("\n Escribe el segundo nombre");
		scanf("%s",Nombre2);
	printf("\n Escribe el tercer nombre");
		scanf("%s",Nombre3);
	printf("\n Escribe la edad del primer nombre");
		scanf("%d",&Edad1);
	printf("\n Escribe la edad del segundo nombre");
		scanf("%d",&Edad2);
	printf("\n Escribe la edad del tercer nombre");
		scanf("%d",&Edad3);
	if (Edad1<Edad2 && Edad1<Edad3){
		printf("\n\t Edad%d",Edad1);
		printf("\n\t El menor es,%s",Nombre1);}
	else if (Edad2<Edad3 && Edad2<Edad1){
		printf("\n\t Edad%d",Edad2);
		printf("\n\t El menor es,%s",Nombre2);}
	else if (Edad3<Edad2 && Edad3<Edad1);{
		printf("\n\t Edad%d",Edad3);
		printf("\n\t El menor es,%s",Nombre3);}
	return 0;
}
