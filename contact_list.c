/*************** Manejo dinamico de memoria **********/
/********************  11/04/2020  *******************/
/*Este programa ilustra el manejo dinamico de memoria*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char NAME[100];
typedef char EMAIL[100];

typedef struct {
	NAME name;
	EMAIL email;
}CONTACT;

int main( int argc, const char * argv[])
{
	CONTACT * list = NULL;

	char buffer[100]; //Variable auxiliar para guardar las cadenas ingresadas por el usuario   
	int goOn, listSize = 0; //goOn es la bandera para romper el bucle while

	do {
		printf("Ingrese el nombre del nuevo contacto (0 para terminar):\n");
		scanf("%99s", buffer);
		if(strcmp("0", buffer) != 0) //Si buffer es igual a "0" el if no se ejecuta
		{
			if( !list )//El inverso de NULL es uno, por tanto, se ejecuta el if. 
			{
				//Se reserva una cantidad de memoria del tamaño de un
				//CONTACT y ademas inicializa el puntero list:
				
				list = malloc( sizeof( CONTACT ) );

			} else // Se ejecuta el else si list ya tiene una direccion de memoria 
			       // apuntada	
			{ 
				//Se reasigna la cantidad de memoria en list, a medida que el 
				//usuario ingresa mas contactos:

				list = realloc( list, sizeof( CONTACT ) * (listSize + 1 ) );
			}
			strcpy( list[ listSize ].name, buffer );//Se llena el campo name
			printf("Ingrese el email de %s:\n", buffer);
			scanf("%99s", buffer);//El buffer ha sido reutilizado
			strcpy(list[listSize].email, buffer);//Se llena el campo email 
			                                     //list[ListSize] es un arreglo
			goOn = 1;
			listSize++;//Este nos servira como indice en el arreglo al ingresar datos
			           //y como factor para el reajuste de memoria  
		} else {
			goOn = 0;
		}
	} while (goOn);
	printf("\n Esta es tu lista de contactos:\n");

	printf("Nombre\t\tEmail\n");
	for( int i = 0; i < listSize; i++){
		printf("%s\t\t%s\n", list[i].name, list[i].email);
	}
	
	free ( list );
	return 0;
}
