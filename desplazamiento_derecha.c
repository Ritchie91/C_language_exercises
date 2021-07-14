/*A continuacion se muestra un programa sencillo en C que ilustra el uso del operador desplazamiento a la derecha*/

#include <stdio.h>

int main()
{
	unsigned a = 0xf05a;
	int b = a;

	printf("%u %d\n", a, b);
	printf("%x\n", a >> 6);
	printf("%x\n", b >> 6);

	return 0;
}
