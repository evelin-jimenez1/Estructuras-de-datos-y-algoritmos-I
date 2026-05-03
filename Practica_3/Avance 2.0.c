#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 2

typedef struct
{
    char nombre[20];
    int creditos;
}Asignatura ;

typedef struct
{
    char *nombre;
    int cuenta;
    float promedio;
    Asignatura materias[5];
}Alumno ;

Alumno crearAlumno(char*, int, float);
void imprimirAlumno(Alumno);
void agregarMateria(Alumno*,int);
int menuModificarAlumno();
void modificarAlumno(Alumno*);

int main() 
{
	int i,j;
    Alumno alumno1= crearAlumno("Evelin", 321184191, 8.5);
    Alumno alumno2 = crearAlumno("Brenda", 321456244, 9.0);
    
	for(i=0; i<5;i++){
		agregarMateria(&alumno1,i);	
	}
	for(i=0; i<5;i++){
		agregarMateria(&alumno2,i);	
	}
	
	imprimirAlumno(alumno1);
	imprimirAlumno(alumno2);
	
	Alumno alumnos[MAX_ALUMNOS];
    int num_alumnos = 0;
    
    do {
        Alumno nuevo_alumno;
        char respuesta;
        
        printf("Desea agregar un nuevo alumno? (s/n): ");
        scanf(" %c", &respuesta);
        
        if (respuesta == 's' || respuesta == 'S') 
		{
            char nombre[20];
            int cuenta;
            float promedio;
            
            printf("Ingrese el nombre del nuevo alumno: ");
            scanf("%s", nombre);
            printf("Ingrese la cuenta del nuevo alumno: ");
            scanf("%d", &cuenta);
            printf("Ingrese el promedio del nuevo alumno: ");
            scanf("%f", &promedio);
            
            nuevo_alumno = crearAlumno(nombre, cuenta, promedio);
            
            for (i = 0; i < 5; i++) {
                agregarMateria(&nuevo_alumno, i);
            }
            
            if (num_alumnos < MAX_ALUMNOS) {
                alumnos[num_alumnos++] = nuevo_alumno;
                printf("Nuevo alumno agregado.\n");
            } else {
                printf("No se pueden agregar más alumnos, se alcanzó el límite máximo.\n");
            }
        } else {
            break;
        }
    } while (1);
    
    for (i = 0; i < num_alumnos; i++) 
	{
        imprimirAlumno(alumnos[i]);
    }
	
	int modificar = menuModificarAlumno();
	if(modificar!=-1){
		switch(modificar)
	{
			case 0:
				modificarAlumno(&alumno1);
				printf("Ahora el alumno modificado: \n");
				imprimirAlumno(alumno1);
			break;
			case 1:
				modificarAlumno(&alumno2);
				printf("Ahora el alumno modificado: \n");
				imprimirAlumno(alumno2);
			break;
		}
	}

}

Alumno crearAlumno(char *nom, int cuen, float prom)
{
	Alumno alumnoCreado;
	alumnoCreado.nombre= nom;
	alumnoCreado.cuenta = cuen;
	alumnoCreado.promedio = prom;
	return alumnoCreado;
}

void imprimirAlumno(Alumno alum)
{
	int i;
	printf("Nombre: %s \n",alum.nombre);
	printf("Cuenta: %d \n",alum.cuenta);
	printf("Promedio: %.2f  \n ",alum.promedio);
	for(i=0; i<5;i++)
	{
		printf("La materia %d es: %s \n",i+1,alum.materias[i].nombre);
		printf("Sus creditos  %d : \n",alum.materias[i].creditos);
	}
}

void agregarMateria(Alumno *alumno,int i)
{
	printf("Escribe el nombre de la materia %d  del alumno %s \n",i+1,alumno->nombre );
	fflush(stdin);
	scanf("%s",alumno->materias[i].nombre );
	fflush(stdin);
	printf("Escribe los creditos de la materia %d \n",i+1);
	scanf("%d",&alumno->materias[i].creditos);
	fflush(stdin);
}

int menuModificarAlumno()
{	
	int modificar=0;
	int aluMod;
	printf("Deseas modificar un alumno? (1 = si, 2 = no) \n");
	scanf("%d",&modificar);
	if(modificar==2)
		return -1;
	else{
		printf("ingresa el alumno a modificar \n");
		scanf("%d",&aluMod);
		return aluMod;
	}
		
}

void modificarAlumno(Alumno *alumno){
	int materiaMod;
	printf("Ingresa la materia que deseas modificar: \n");
	scanf("%d",&materiaMod);
	fflush(stdin);
	printf("Escribe el nuevo nombre de la materia: \n");
	scanf("%20[^\n]",alumno->materias[materiaMod].nombre );
	fflush(stdin);
	printf("Escribe los creditos de la materia: \n");
	scanf("%d",&alumno->materias[materiaMod].creditos);
	fflush(stdin);
}
	


