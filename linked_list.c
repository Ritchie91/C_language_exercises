#include <stdio.h>
#include <stdlib.h>

//Se crea una estructura para almacenar nodos y numeros
//El typedef sirve para usar NODE en lugar de struct Node  

typedef struct Node {
	int number;
	struct Node * next;
} NODE;

//Esta funcion devolvera el puntero newNode de tipo NODE
NODE * createNode( int number )
{
	NODE * newNode;

	newNode = malloc( sizeof(NODE) );  //Reserva y asigna una direccion de memoria a newNode
	newNode->next = NULL;  //El campo next (un puntero) es inicializado en NULL
	newNode->number = number;

	return newNode;
}

int main( int argc, const char * arg[] )
{
	//current es un puntero auxiliar para recorrer la lista
	//start es el puntero inicial de la lista, no debe perderse

	
	NODE * start = NULL, * current;  
	char goOn;
	int listSize = 0, number;

	do {
		printf( "La lista contiene %d nodos. Ingrese el siguiente numero (0 para finalizar)\n", listSize );
		scanf("%d", &number );
		if ( number ) {
			if ( !start ) {
				start = createNode( number );  //se asigna valor inicial a start 
				listSize++;
			} else {
				current = start; //current es igual a start, para no perder start
				while ( current->next ) {
					current = current->next;
				}

				
				current->next = createNode( number );
				listSize++;
			}
			goOn = 1;
		} else {
			goOn = 0;
		}
	} while ( goOn );

	current = start;  //current vuelve a tomar el valor del nodo inicial para imprimir
	printf( "La lista contiene los numeros: \n" );
	while (current) {
		printf( "%d", current->number );
		printf( current->next ? ", " : "\n" );
		current = current->next;  //current toma el valor del proximo nodo sucesivamente
	}
	
	return 0;
}
