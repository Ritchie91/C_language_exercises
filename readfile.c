/**** Este programa permite la lectura de un archivo de texto ****/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char * argv[] )
{
	// FILE es un tipo de dato que nos permite trabajar con archivos del sistema de archivos
	// La funcion  fopen( , ) nos permite abrir archivo
	// El primer argumento de fopen( , ) es el nombre del archivo que deseamos leer
	// El segundo argumento de fopen( , ) "r" nos indica que el archivo esta en modo lectura
	// *fp es un puntero a un archivo
	
	FILE * fp = fopen( argv[1], "r" );
	char c;  // Aqui se estara copiando caracter a caracter el contenido del archivo

	// Inicia el proceso de copiado
	// La funcion fgetc) obtiene los caracteres uno a uno del archivo apuntado por fp
	
	while ( ( c = fgetc( fp ) ) != EOF ){
		printf( "%c", c );
	}

	fclose(fp);  // Se liberan los recursos que este archivo esta utilizando

	return 0;
}

