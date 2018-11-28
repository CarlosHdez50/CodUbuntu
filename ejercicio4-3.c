/*Se requiere un algoritmo que determine de N cantidades cuantas son ceroy cuantas son mayores a cero
 * By Carlos Hernández Carballo*/
#include<stdio.h>
int Numero,n;
int s1=0;
int s2=0;
int s3=0;
int main()
{
	printf("\nIngrese numeros");
	scanf("%d",&n);
	s1=0;
	s2=0;
	s3=0;
	for (i='n')
		printf("\nDigite un numero");
		scanf("%d",&Numero);
		if (Numero==0)
			s1=s1+1;
		else if(Numero<0)
			s2=s2+1;
		else if(Numero>0)
			s3=s3+1;
	printf("\n\tIguales que cero%d",s1);
	printf("\n\tMenores que cero%d",s2);
	printf("\n\tMayores que cero%d",s3);
}
