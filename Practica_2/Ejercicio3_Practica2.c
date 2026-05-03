#include<stdio.h>

int arr1[4][5][2], var,i,j,k;
int *point;
void main()
{
	point = arr1;
	var=5;
	for (i=0; i<4; i++)
	{
		for (j=0; j< 5; j++)
		{
			for (k=0; k<2; k++)
			{
				arr1[i][j][k]=var;
				var+=5;
			}
		}
	}
	int a= *(point+3);
	int b= *(point+12);
	int c= *(point+27);
	int d= *(point+37);
	printf("a = %d, b= %d, c=%d, d=%d",a,b,c,d);
}
