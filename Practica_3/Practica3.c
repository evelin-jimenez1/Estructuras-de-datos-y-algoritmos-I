#include<stdio.h>
int i,j;
typedef struct 
{
	int matricula;
	char nombre[20];
	char grado[20];
}Militar;

typedef struct 
{
	int identificador;
	char categoria[20];
	char ubicacion[50];
	Militar militar[3];
}Batallon;

typedef struct
{
	char nombre[10];
	char zona[15];
	Batallon batallon[3];
}Division;

Division crearDivision();
Batallon crearBatallon();
Militar crearMilitar();
void asignarMilitarABatallon (Batallon*);
void asignarBatallonADivision (Division*);
void mostrarDivisiones(Division);
void mostrarBatallones(Batallon,int);
void mostrarMilitares(Militar,int);


int main()
{
	Division division1	= crearDivision();
	asignarBatallonADivision(&division1);
	asignarMilitarABatallon(division1.batallon);
	mostrarDivisiones(division1);
}

Militar crearMilitar ()
{
	Militar militarC;
		printf("####### Militar %d #######\n",j+1);
		printf("Matricula del militar %d: ",j+1);
		scanf("%d", &militarC.matricula);
		printf("Ingrese el nombre del militar %d: ",j+1);
		scanf("%s", militarC.nombre);
		fflush(stdin);
		printf("Ingrese el grado del militar %d: ",j+1);
		scanf("%s", militarC.grado);
		fflush(stdin);
		printf("\n");
	return militarC;
}

Batallon crearBatallon ()
{
	Batallon batallonC;
		printf("####### Batallon %d #######\n",i+1);
		printf("Identificador del batallon %d: ",i+1);
		scanf("%d", &batallonC.identificador);
		printf("Ingrese la categoria del batallon %d: ",i+1);
		scanf("%s", batallonC.categoria);
		fflush(stdin);
		printf("Ingrese la ubicacion del batallon %d: ",i+1);
		scanf("%s", batallonC.ubicacion);
		fflush(stdin);
		printf("\n");
	return batallonC;
}

Division crearDivision()
{
	Division divisionC;
	printf("####### Division #######\n");
	printf("Ingrese nombre de la division: ");
	scanf("%s", divisionC.nombre);
	fflush(stdin);
	printf("Ingrese zona de la division: ");
	scanf("%s", divisionC.zona);
	fflush(stdin);
	 printf("\n");
	return divisionC;
}

void asignarBatallonADivision(Division *division)
{
	for (i = 0; i < 3; i++) 
	{
        division->batallon[i] = crearBatallon();
    }
}

void asignarMilitarABatallon(Batallon *batallon)
{
	for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
        {
            batallon[i].militar[j] = crearMilitar();
        }
    }
}

void mostrarMilitares(Militar mil,int i)
{
	printf("####### Militar %d #######\n",i);
	printf("Matricula del militar %d: %d\n", i, mil.matricula);
	printf("Nombre del militar %d: %s\n", i, mil.nombre);
	printf("Grado del militar %d: %s\n", i, mil.grado);
	printf("\n");
}

void mostrarBatallones(Batallon bat,int i)
{
	printf("####### Batallon %d #######\n",i);
	printf("Identificador del batallon %d: %d\n", i, bat.identificador);
	printf("Categoria del batallon %d: %s\n", i, bat.categoria);
	printf("Ubicacion del batallon %d: %s\n", i, bat.ubicacion);
	printf("\n");
	for (j = 0; j < 3; j++) 
	{
		mostrarMilitares(bat.militar[j], j + 1);
	}
}

void mostrarDivisiones(Division div)
{
	printf("####### Division #######\n");
	printf("Nombre: %s\n", div.nombre);
	printf("Zona: %s\n", div.zona);
	printf("\n");
	for (i = 0; i < 3; i++) 
	{
        mostrarBatallones(div.batallon[i],i+1);
    }
}

