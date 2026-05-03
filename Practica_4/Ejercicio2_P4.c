#include "Alumno.h"
main(){
	int j;
	printf("Tamaño de objeto Alumno = %d \n",sizeof(Alumno));
	Alumno *din1,*din2,*din3;
	din1 = malloc(5*sizeof(Alumno));
	din2 = calloc(5,sizeof(Alumno));
	
	printf("Primer apuntador: \n");
	for(j=0;j<5;j++)
	{
		printf("Direccion[%d]=%d \n",j,din1+j);
	}
	
	printf("ALUMNOS\n");
	for(j=0; j<2;j++)
	{
		printf("Alumno %d \n",j+1);
		obtenerAlumno(&din1[j]);
		agregarDireccion(&din1[j]);
	}
	for(j=0; j<2; j++)
	{
		printf("Alumno %d\n",j+1);
		imprimirAlumno(din1[j]);
	}
	
	printf("\n");
	
	printf("Segundo apuntador \n");
	for(j=0;j<5;j++)
	{
		printf("Direccion[%d]=%d \n",j,din2+j);
	}
	printf("\n");
	
	for(j=0; j<2;j++)
	{
		obtenerAlumno(&din2[j]);
		agregarDireccion(&din2[j]);
	}
	for(j=0; j<2; j++)
	{
		imprimirAlumno(din2[j]);
	}
	
	printf("Con realloc: \n");
	din3 = realloc(din2,10);
	for(j=0;j<10;j++)
	{
		printf("&din3[%d]=%d \n",j,din3+j);
	}
	for(j=0; j<2;j++)
	{
		obtenerAlumno(&din1[j]);
		agregarDireccion(&din1[j]);
	}
	for(j=0; j<2; j++)
	{
		imprimirAlumno(din2[j]);
	}
	din1=realloc(din1,0);
	din1=NULL;
	if(din1==NULL)
	{
		printf("La memoria se ha liberado\n");
	}
	else 
	{
		printf("Error: la memoria no se ha liberado");
	}
	din3 = realloc(din2,0);
	din3=NULL;
	if(din3==NULL)
	{
		printf("La memoria se ha liberado\n");
	}
	else 
	{
		printf("Error: la memoria no se ha liberado");
	}
	//free(din1);//
	//	free(din2);
	//	free(din3);
	system("PAUSE");
}


