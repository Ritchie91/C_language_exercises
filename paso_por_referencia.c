#include <stdio.h>

int sumar_arreglo(int * arreglo, int num)
{
	printf("Este es el valor de la variable arreglo dentro de esta funcion: %p\n", arreglo);
	int i;
	int suma = 0;
	for(i = 0; i < num; i++)
	{
		suma += arreglo[i];
		printf("suma [%d] = %d, direccion de arreglo[%d] = %p  \n", i + 1, suma, i, &arreglo[i]);
		*arreglo = 10;
	}

	return suma;
}

int main()
{
	printf("tamaño de un entero: %ld bytes\n", sizeof(int));
	int a[5] = {5,6,7,8,9};
	int * p;
	p = &a[0];
	printf("La direccion en memoria de la variable a es: %p, y el valor almacenado es: %d\n", p, *p);
	sumar_arreglo(p, 5);
	printf("El nuevo valor de p es %d\n", * p);
	return 0;
}


