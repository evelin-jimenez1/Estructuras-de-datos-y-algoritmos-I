#include <stdio.h>
int i;

int binarioPuro(int arreglo[]) 
{
    int decimal = 0;
    for (i = 12- 1; i >= 0; i--) {
        decimal += arreglo[i] * pow(2, 12 - 1 - i);
    }
    return decimal;
}

int complementoA2(int arreglo[]) 
{
    if (arreglo[0] == 1) {
        for (i = 0; i < 12; i++) 
		{
            arreglo[i] = (arreglo[i] == 0) ? 1 : 0;
        }
        for (i = 11; i >= 0; i--) {
            if (arreglo[i] == 0) {
                arreglo[i] = 1;
                break;
            } else {
                arreglo[i] = 0;
            }
        }
        return -binarioPuro(arreglo);
    } else 
	{
        return binarioPuro(arreglo);
    }
}

int main() 
{
    int arreglo[12];
    char opcion;
    float entera = 0;
	float decimal = 0;
    printf("Ingresa 12 elementos (unicamente 0's y 1's)\n");
    for (i = 0; i < 12; i++) 
	{
        printf("Ingrese el elemento %d: ",i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("Arreglo: [");
    for (i = 0; i < 12; i++) 
	{
        printf("%d", arreglo[i]);
    }
	printf("]\n");
	do 
	{
        printf("\nSeleccione la opcion:\n");
        printf("a) Binario puro\n");
        printf("b) Punto fijo (6 bits enteros y 6 bits decimales)\n");
        printf("c) Representacion de complemento a 2\n");
        printf("d) Salir\n");
        scanf(" %c", &opcion);

        switch (opcion) 
		{
            case 'a':
            	printf("El resultado en decimal es: %d\n", binarioPuro(arreglo));
			    break;
			case 'b':
			    for (i = 0; i < 6; i++) {
			        entera += arreglo[i] * pow(2, 5 - i);
			    }
			    for (i = 6; i < 12; i++) {
			        decimal += arreglo[i] * pow(2, 5 - (i - 6));
			    }
                printf("El resultado en decimal es: %.6f\n", entera + decimal / 64.0);
                break;
			case 'c':
				printf("El resultado en decimal es: %d\n", complementoA2(arreglo));
				break;
			case 'd':
			printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida\n");
		}	
	} while (opcion != 'd');
}
