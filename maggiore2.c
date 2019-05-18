#include <stdio.h>

int main ()
{
	int numero1, numero2;

	printf("Inserisca qui il primo numero: ");
	scanf("%d", &numero1);
	printf("Inserisca qui il secondo numero: ");
	scanf("%d", &numero2);

	if (numero1 > numero2)

		printf("Il numero %d è maggiore del numero %d\n", numero1, numero2);

	else
{
		printf("Non so farla solamente con un 'if', questo messaggio è perché non voglio creare la issue\n");
}
	return 0;
}