#include "Automovil.h"
int main()
{
	int j,tamanio;
	printf("Escribe de que tamaño quieres tu arreglo: ");
	scanf("%d",&tamanio);
	
	Automovil *din1;
	din1 = malloc(tamanio*sizeof(Automovil));
	for(j=0;j<tamanio;j++)
	{
		printf("Ingresa los datos del automovil %d\n",j+1);
		obtenerAutomovil(&din1[j]);
	}
	for(j=0;j<tamanio;j++)
	{
		printf("Automovil: %d\n",j+1);
		imprimirAutomovil(din1[j]);
	}
	printf("\n");
	free(din1);
	return 0;
}
