/*Compañia de seguros ofrece polizas de dos tipos
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int poliza,CuotaP,E,L,BebeA,EN,Cuota;
int Cobertura_amplia=1;
int Dterceros=2;
int Si=3;
int No=4;
int main(void)
{
	printf("\n Digite el numero de poliza");
	scanf("%d",&poliza);
	printf("\n Digite 1200 si es poliza 1 o 950 si es poliza 2");
	scanf("%d",&CuotaP);
	printf("\n Escribe la edad");
	scanf("%d",&E);
	printf("\n Digite 3 si usa lentes o 4 si no");
	scanf("%d",&L);
	printf("\n Digite 3 si consume alcohol o 4 si no");
	scanf("%d",&BebeA);
	printf("\n Digite 3 si tiene enfermedades o 4 si no");
	scanf("%d",&EN);
	if (poliza==1||poliza==2)
		if (E>=40 && L==3 && BebeA==3 && EN==3){
			Cuota=(CuotaP*1.40);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
		else if (E>40 && L==3 && BebeA==3 && EN==4){
			Cuota=(CuotaP*1.30);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
		else if (E==40 && L==4 && BebeA==4 && EN==4){
			Cuota=(CuotaP*1.20);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
		else if (E<40 && L==4 && BebeA==3 && EN==4){
			Cuota=(CuotaP*1.15);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
		else if (E<40 && L==3 && BebeA==4 && EN==4){
			Cuota=(CuotaP*1.15);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
		else if (E<40 && L==4 && BebeA==4 && EN==4){
			Cuota=(CuotaP);
				printf("\n\tLa cuota a pagar es de%d",Cuota);}
	return 0;
}
