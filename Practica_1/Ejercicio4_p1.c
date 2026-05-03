#include <stdio.h>
#define Arreglo 10
int i;
int Suma(int arreglo[])
{
	int suma=0;
	for (i = 0; i < Arreglo; i++) 
	{
        suma += arreglo[i];
    }
	return suma;
}

int Multiplicacion(int arreglo[])
{
	int mult=1;
	for (i = 0; i < Arreglo; i++) 
	{
        mult *= arreglo[i];
    }
	return mult;
}

int Divisible4(int arreglo[])
{
	int valor=0;
	for (i = 0; i < Arreglo; i++) 
	{
        if (arreglo[i] % 4 == 0) 
		{
            valor += arreglo[i];
        }
    }
    return valor;
}
int main() 
{
    int arreglo[10];
    int opcion,numero;
    do {
        printf("\nMENU:\n");
        printf("1) Ingresar o modificar elementos del arreglo\n");
        printf("2) Mostrar el resultado de la suma de los elementos\n");
        printf("3) Mostrar el resultado de la multiplicación de los elementos\n");
        printf("4) Realizar la suma solo de los elementos divisibles entre 4\n");
        printf("5) Multiplicar cada elemento del arreglo por un numero dado por el usuario\n");
        printf("6) Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
			    printf("Ingrese o modifique los elementos del arreglo:\n");
			    for (i = 0; i < 10; i++) 
				{
			        printf("Ingrese el elemento %d: ",i+1);
			        scanf("%d", &arreglo[i]);
			    }
			    printf("Arreglo: [");
			    for (i = 0; i < 10; i++) 
				{
			        printf("%d", arreglo[i]);
			        if (i < 10 - 1) 
					{
			            printf(", ");
			        }
			    }
    			printf("]\n");
                break;
            case 2:
            	    printf("Arreglo: [");
			    for (i = 0; i < 10; i++) 
				{
			        printf("%d", arreglo[i]);
			        if (i < 10 - 1) 
					{
			            printf(", ");
			        }
			    }
    			printf("]\n");
				printf("\n El valor es: %d \n",Suma(arreglo));
                break;
            case 3:
            	    printf("Arreglo: [");
			    for (i = 0; i < 10; i++) 
				{
			        printf("%d", arreglo[i]);
			        if (i < 10 - 1) 
					{
			            printf(", ");
			        }
			    }
    			printf("]\n");
				printf("\n El valor es: %d \n",Multiplicacion(arreglo));
                break;
            case 4:
            	    printf("Arreglo: [");
			    for (i = 0; i < 10; i++) 
				{
			        printf("%d", arreglo[i]);
			        if (i < 10 - 1) 
					{
			            printf(", ");
			        }
			    }
    			printf("]\n");
			    printf("\n El valor es: %d \n",Divisible4(arreglo));
                break;
            case 5:
            	printf("Ingrese un numero para multiplicar cada elemento del arreglo: ");
			    scanf("%d", &numero);
			        printf("Arreglo: [");
			    for (i = 0; i < 10; i++) 
				{
			        printf("%d", arreglo[i]);
			        if (i < 10 - 1) 
					{
			            printf(", ");
			        }
			    }
    			printf("]\n");
			    printf("Arreglo multiplicado por %d: [", numero);
			    for (i = 0; i < Arreglo; i++) 
				{
			        printf("%d", arreglo[i] * numero);
			        if (i < 10 - 1) {
			            printf(", ");
			        }
			    }
			    printf("]\n");
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida\n");
        }
    } while (opcion != 6);

    return 0;
}

