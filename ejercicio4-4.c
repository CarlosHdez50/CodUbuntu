/*Una compañia fabrica focos de colores verde,blanco,rojo y se desean contabilizarlos
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int n;
int rojo=0;
int verde=0;
int blanco=0;
int foco=0;
int main()
{
	printf("\nDigite la cantidad de focos que hay en el lote");
	scanf("%d",&n);
	for (i=1,n+1)
		printf("\n\tDigite el color del foco: rojo,verde o blanco");
		if (foco==rojo)
			rojo=rojo+1;
		if (foco==verde)
			verde=verde+1;
		if (foco==blanco)
			blanco=blanco+1;
	printf("\n\tLos focos rojos son%d",rojo);
	printf("\n\tLos focos verdes son%d",verde);
	printf("\n\tLos focos blancos son%d",blanco);
	return 0;
}
