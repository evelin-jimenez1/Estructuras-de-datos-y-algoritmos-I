#include <stdio.h>

typedef struct {
	char calle[20];
	int num;
	char colonia[20];
	int cPostal;
}Direccion;
typedef struct {
	int numCuenta;
	char nombre[15];
	char apellido[15];
	float promedio;
	Direccion domicilio;
}Alumno;

Alumno crearAlumno(int, char*, char*, float);
void imprimirAlumno(Alumno);
void obtenerAlumno(Alumno*);
void agregarDireccion(Alumno*);
Direccion crearDireccion(char *, int, char*, int);

Alumno crearAlumno(int numeroC, char *name, char *lastname, float prom)
{
	Alumno alumnoCreado;
	alumnoCreado.numCuenta = numeroC;
	strcpy(alumnoCreado.nombre,name);
	strcpy(alumnoCreado.apellido,lastname);
	alumnoCreado.promedio = prom;
	return alumnoCreado;
}
void imprimirAlumno(Alumno alumnoPrint)
{
	printf("Numero de cuenta: %d \n",alumnoPrint.numCuenta);
	printf("Name: %s \n",alumnoPrint.nombre);
	printf("LastName : %s  \n ", alumnoPrint.apellido);
	printf("Calle: %s\n",alumnoPrint.domicilio.calle);
	printf("Numero de tu direccion: %d\n",alumnoPrint.domicilio.num);
	printf("Colonia: %s\n",alumnoPrint.domicilio.colonia);
	printf("Codigo Postal: %d\n",alumnoPrint.domicilio.cPostal);
}
void obtenerAlumno(Alumno *alumno)
{
	printf("Numero de cuenta: ");
	scanf("%d" ,&alumno->numCuenta);
	printf("Nombre: ");
	scanf("%s",alumno->nombre);
	fflush(stdin);
	printf("apellido: ");
	scanf("%s" ,alumno->apellido);
	fflush(stdin);
	printf("Promedio: ");
	scanf("%f" ,&alumno->promedio);
}

Direccion crearDireccion(char *calle, int numero, char* col, int postal)
{
	Direccion direccionCreada;
	strcpy(direccionCreada.calle,calle);
	direccionCreada.num = numero;
	strcpy(direccionCreada.colonia,col);
	direccionCreada.cPostal = postal;
	return direccionCreada;
}

void agregarDireccion(Alumno *alumno)
{
	printf("Calle: ");
	scanf("%s",alumno->domicilio.calle);
	fflush(stdin);
	printf("Numero: ");
	scanf("%d",&alumno->domicilio.num);
	printf("Colonia: ");
	scanf("%s",alumno->domicilio.colonia);
	fflush(stdin);
	printf("Codigo postal: ");
	scanf("%d",&alumno->domicilio.cPostal);
}

