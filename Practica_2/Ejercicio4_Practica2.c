#include <stdio.h>
#include <math.h>
void calculos(float *, float *);

int main() {
    float a,b,x,y;

    printf("Ingrese el valor uno: ");
    scanf("%f", &a);
    printf("Ingrese el valor dos: ");
    scanf("%f", &b);
    
    x=a;
    y=b;
    calculos(&a, &b);
    
    printf("a) %.2f ^ %.2f = %.2f\n",x,y,a);
    printf("b) %.2f / %.2f = %.2f\n", a,x,b);
    
    return 0;
}

void calculos(float *a, float *b) 
{
	float aux;
	aux=*a;
    *a=pow(*a, *b);
    *b= *a / aux;  
}


