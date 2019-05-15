#include <stdio.h>
int main()
{
	int raggio, superficie;
	double pigreco = 3.1415926535;

	printf("Inserisci il raggio: ");
	scanf("%d", &raggio);

	superficie = pigreco * raggio * raggio;

	printf("La superficie è %d.\n",superficie);

	return 0;
}