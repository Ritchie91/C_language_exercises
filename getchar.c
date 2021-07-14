#include <stdio.h>

int main()
{
	int i;
	char c[20];
        printf("Escriba una secuencia de caracteres\n");
	for(i = 0; i < 15; i++)
	c[i] = getchar();
	printf("Esta  es la cadena construida con la funcion getchar():\n");

	for(i = 0; i < 15; i++)
		printf("%c",c[i]);

	printf("\n");

	return 0;
}
