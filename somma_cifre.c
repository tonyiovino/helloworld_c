#include <stdio.h>

int main()
{
	int a;
	int a1, a2, a3;
	int aaa;

	printf("Inserisci un numero di tre cifre: ");
	scanf("%d", &a);

	if (a < 100 || a > 999) {
		printf("Per favore, inserire un numero di tre cifre.\n");
} 	else {
	a3 = a % 10;
	a = a / 10;
	a2 = a % 10;
	a = a / 10;
	a1 = a % 10;
	a = a / 10;

	aaa = a1 + a2 + a3;

	

	printf("La somma delle tre cifre è %d\n", aaa);
}

	return 0;
}