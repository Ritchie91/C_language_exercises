#include <stdio.h>
#include <stdlib.h>  //Esta libreria permite el uso de la funcion atoi()
#include <time.h>  //Esta libreria contiene funciones relacionadas con el reloj del sistema

int main( int argc, const char * argv[] )
{

//time_t es un tipo de dato definido para el almacenamiento de valores de tiempo del sistema

//oneDay es la cantidad de segundos que contiene un dia

//La funcion time(NULL) me dira cuantos segundos han pasado desde el primer segundo de Unix

//Lo que me devuelva time(NULL) se almacenaran en la variable today

//nextDate es la que calcula el programa


	time_t oneDay = 24 * 60 * 60, today = time(NULL), nextDate;

	nextDate = today + oneDay * atoi( argv[1] );

	//La funcion ctime() toma como argumento un tipo de dato time_t y devuelve un string
	
	printf( "%s\n", ctime( &nextDate ) );

	return 0;

}
