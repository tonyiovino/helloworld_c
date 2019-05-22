#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	int f;

	printf("Inserisci 5 numeri e ti dirò il più grande!\n");
	printf("Inserisci qui il primo numero: ");
	scanf("%d", &a);
	printf("Inserisci qui il secondo numero: ");
	scanf("%d", &b);
	printf("Inserisci qui il terzo numero: ");
	scanf("%d", &c);
	printf("Inserisci qui il quarto numero: ");
	scanf("%d", &d);
	printf("Inserisci qui l'ultimo numero e poi ti dirò il più grande: ");
	scanf("%d", &e);

	f = a

	if (b > f) f = b;

	if (c > f) f = c;
	
	if (d > f) f = d;
	
	if (e > f) f = e;
	
	printf("Il numero più grande è %d.\n", f);

	return 0;
}
