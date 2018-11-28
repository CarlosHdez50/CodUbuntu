/*Un profesor tiene un salario mensual de 1500 y recibe un incremento anual del 10% durante 6 años
 * By Carlos Hernández Carballo*/
#include <stdio.h>
int SI=1500;
int SF=0;
int i=0.1;
int a=0;
int SA;
int main()
{
	while (a<=5)
		a=a+1;
		SA=SI+(SI*0.1);
		SF+=SA;
		printf("\n\tEl año es%d",a);
		printf("\n\tEl salario anual es%d",SA);
		printf("\n\tEl salario final es %d",SF);
	return 0;
}
