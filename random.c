#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand( time( NULL ) );  //srand() es el generador de numeros aleatorios
	printf("%d\n", rand() );  //rand() nos muestra el numero generado

	return 0;

}
