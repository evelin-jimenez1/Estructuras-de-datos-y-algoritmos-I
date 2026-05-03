#include <stdio.h>
#define C 10
int main()
{
	int lista[C]={10,15,30,25,50,102,70,256,90,78};
	int valor=0, i=1;
	do
	{
		printf("\n %d",lista[i]);
		valor+=lista[i];
		i=i+2;
	} while(i<C);
	printf("\n El valor es: %d \n",valor);
}
