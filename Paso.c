/*
Programa en C Uso de paso de referencia

*/

// Definicion de Librerias
	#include <stdio.h>

// Declaracion de Funciones
	void sumatoria (float inicio,float fin,float *resultado);
	// el uso del * hace referencia a la direccion de la 
	// memoria en la cual se guarda la informacion requerida
	//
//Variables globales
	int miVariableGlobal;
// Programa principal (MAIN)

	int main(void)
	{
		float inicio,fin,resultado;
	    miVariableGlobal = 10;

	    printf("Ingrese el valor inicial\n");
	    scanf("%f",&inicio);
	    printf("Ingrese el valor final\n");
	    scanf("%f",&fin);

	    sumatoria(inicio,fin,&resultado);
	    //El uso de & hace uso de lo almacenado en la varible Resultado
		printf("Resultado = %f\n",resultado );
		/* code */
		return 0;
	}
// Definicion de Funciones
void sumatoria (float inicio,float fin,float *resultado){
	printf("Este es el valor de miVariableGlobal =>  %d\n",miVariableGlobal );
	int i = 0;
	float aux=0;
	for ( i = inicio; i < fin ; ++i)
	{
		aux = i + aux;
	}

	(*resultado) = aux;
	return;
}