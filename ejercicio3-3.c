/*Determinar el regalo que puede comprar con cierta cantidad de dinero para el 14 de febrero
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float Dinero;
int Tarjeta=1;
int Chocolates=2;
int Flores=3;
int Anillo=4;
int main()
{
	printf("\nEscribe la cantidad de dinero");
	scanf("%f",&Dinero);
	if (Dinero<=10)
	{
		printf("\n\tTarjeta,%d",Tarjeta);
	}
	else if (Dinero>=11 && Dinero<=100)
	{
		printf("\n\tChocolates,%d",Chocolates);
	}
	else if (Dinero>=101 && Dinero<=250)
	{
		printf("\n\tFlores,%d",Flores);
	}
	else if (Dinero>=251)
	{
		printf("\n\tAnillo,%d",Anillo);
	}
	return 0;
}
