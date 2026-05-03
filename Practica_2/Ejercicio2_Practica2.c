#include<stdio.h>
int azul (int*,int*);
main(void)
{
	int a=4;
	int b=7;
	int c;
	c = azul(&a,&b);
	printf("Los valores son: %d, %d y %d \n ",a,b,c);
	return 0;
}
int azul(int *k, int *m)
{
	*k = *m + *m; 
	*m = *k + *k; 
	*k = *m - *k; 
	*m = *k - *m; 
	return 2 * *m; 
}
