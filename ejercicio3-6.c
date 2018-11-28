/*Determinar el costo y descuento que tendra un artículo
 * By Carlos Hernández Carballo*/
#include <stdio.h>
float ValorC,Descuento,ValorPagar;
int main()
{
	printf("\n Escribe el valor de compra");
	scanf("%f",&ValorC);
	if (ValorC>=200){
		Descuento=(ValorC*0.15);}
	else if (ValorC>=100){
		Descuento=(ValorC*0.12);}
	else if (ValorC<100){
		Descuento=(ValorC*0.10);}
		ValorPagar=(ValorC-Descuento);
	printf("\n\tEl descuento es de%f",Descuento);
	printf("\n\tEl valor a pagar es de%f",ValorPagar);
	return 0;
}
