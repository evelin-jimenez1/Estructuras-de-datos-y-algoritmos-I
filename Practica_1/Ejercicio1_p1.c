#include <stdio.h>
int main()
{
	int i;
	int a[]={14,21,28,35};
	float b[4]={10.5,11.33,14.44,77.33};
	short c[10]={100,200,300};

	char cad1[]="hola";
	char cad2[]={'e','d','a','1'};
	char cad3[5]="hola buenas tardes";

	printf("%c \n",cad1[1]);
	printf("%c \n",cad2[2]);
	printf("%c \n",cad3[3]);
	printf("%c \n",cad3[2]);
	
	for(i=0; i<=3; i++)
		{
			printf("%i\n",a[i]);
		}
	for(i=0; i<=3; i++)
		{
			printf("%.2f\n",b[i]);
		}
	for(i=0; i<=2; i++)
		{
			printf("%i\n",c[i]);
		}
	return 0;
}
