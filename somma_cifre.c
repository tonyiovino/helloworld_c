#include <stdio.h>

int main()
{
	int a;
	int a1, a2, a3;

	printf("Inserisci un numero di tre cifre: ");
	scanf("%d", &a);

	if (a < 100 || a > 999) {
		printf("Per favore, inserire un numero di tre cifre.\n");
} 	else {
	a = a1 + a2 + a3;

	printf("La somma delle tre cifre è %d\n", a);
}

	return 0;
}