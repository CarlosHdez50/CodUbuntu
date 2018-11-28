/*El nuafragio Satisfecho local de hamburguesas que cobra en tarjeta de credito y se le aumente un 5% sobre la compra
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int Hs=0;
int Hd=0;
int Ht=0;
int CH=0;
int CHs=20;
int CHd=25;
int CHt=28;
int continuar='s';
int pedido,TC;
int main()
{
	while (continuar=='s')
		printf("\n\tDigite el tipo de hamburguesa que desea s,d,t");
		printf("\n\tDigite s si desea hacer más pedidos");
		if (pedido =='s')
			Hs=Hs+1;
		if (pedido =='d')
			Hd=Hd+1;
		if (pedido =='t')
			Ht=Ht+1;
	printf("\n\t Digite c si se va a ocupar tarjeta de credito");
		if (TC=='c')
			CHs=(CHs*Hs+CHd*Hd+CHt*Ht)+((CHs*Hs+CHd*Hd+CHt*Ht)*(0.5));
		else
			CH=(CHs*Hs+CHd*Hd+CHt*Ht);
		printf("\n\tEl total a pagar por las hamburguesas consumidad es%d",CH);
	return 0;	
}

