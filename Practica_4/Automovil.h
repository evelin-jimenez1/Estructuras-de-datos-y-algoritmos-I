#include <stdio.h>

typedef struct {
	char marca[20];
	char modelo[20];
	char placas [30];
	int anio;
} Automovil;

Automovil crearAutomovil(char*, char*, char*, int);
void obtenerAutomovil(Automovil*);
void imprimirAutomovil(Automovil);

Automovil crearAutomovil(char *mar, char *model, char *placas, int anio)
{
	Automovil automovilCreado;
	strcpy(automovilCreado.marca,mar);
	strcpy(automovilCreado.modelo,model);
	strcpy(automovilCreado.placas,placas);
	automovilCreado.anio = anio;
	return automovilCreado;
}
void obtenerAutomovil(Automovil *automovil)
{
	printf("Marca: ");
	scanf("%s",automovil->marca);
	fflush(stdin);
	printf("Modelo: ");
	scanf("%s",automovil->modelo);
	fflush(stdin);
	printf("Placas: ");
	scanf("%s",automovil->placas);
	printf("Año: ");
	scanf("%d",&automovil->anio);
}

void imprimirAutomovil(Automovil automovilPrint)
{

	printf("Marca: %s \n",automovilPrint.marca);
	printf("Modelo: %s \n",automovilPrint.modelo);
	printf("Placas: %s \n",automovilPrint.placas);
	printf("Año: %d  \n ", automovilPrint.anio);
	
}


