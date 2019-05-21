#include <stdio.h>

int main ()
{
	int a, b;
	int c;

	printf("Inserisca qui il primo numero: \n");
	scanf("%d", &a);
	printf("Inserisca qui il secondo numero: \n");
	scanf("%d", &b);

	c = a;

	if (a < b) c = b;
		printf("Il numero più grande è %d.\n", c);

	return 0;
}
