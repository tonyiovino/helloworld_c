#include <stdio.h>
int main () 
{	
	int a, b; 

	printf("Inserisci un numero: "); 
	scanf("%d", &a); 
	printf("Inserisci il numero più grande del numero precedente: "); 
	scanf("%d", &b);
 
	if (a < b) 
{		printf("Il numero %d è più grande del numero %d.\n", b, a); 
} 
	else 
{		printf("Sei stupido? O fai il furbetto?\n");
}
	printf("Inserisci un numero: ");
	scanf("%d", &a);
	printf("Inserisci un numero più grande di quello di prima: ");
	scanf("%d", &b);

	if (a < b)
{		printf("Oh... Finalmente hai capito! Il numero %d è più grande del numero %d\n", b, a);
}
	else
		printf("Okay... Mostrami la tua cartella clinica, mi sa che sei stupido davvero...\n");

	return 0; 
}