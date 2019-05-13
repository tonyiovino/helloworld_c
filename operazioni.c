#include <stdio.h>
int main()
{
	int numero1, numero2;
	int somma, differenza, prodotto, quoto, resto;

	printf("Inserisci una cifra ");
	scanf("%d", &numero1); 
	printf("Inserisci un'altra cifra ");
	scanf("%d", &numero2);

	somma = numero1 + numero2;
	differenza = numero1 - numero2;
	prodotto = numero1 * numero2;
	quoto = numero1 / numero2;
	resto = numero1 % numero2;

	printf("%d + %d = %d\n", numero1, numero2, somma);
	printf("%d - %d = %d\n", numero1, numero2, differenza);
	printf("%d * %d = %d\n", numero1, numero2, prodotto);
	printf("%d / %d = %d\n", numero1, numero2, quoto);
	printf("%d % %d = %d\n", numero1, numero2, resto);

	return 0;
}