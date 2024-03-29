/*Scrivere un programma che mostra a video il triangolo di
Tartaglia di dimensione chiesta all'utente (massimo 10). Il
programma deve eseguire un controllo di validità sulla dimensione
chiesta all'utente e nel caso di valore non valido richiederla.
Esempio: il triangolo di Tartaglia di dimensione 5 (valore inserito
dall'utente) è:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/

#include<stdio.h>

#define MAX 10

int fattoriale (int);

int main() {
	int n, i, j, coeff;

	do
		scanf("%d", &n);
	while(n<=0 || n>10);

	printf("\n\n");

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			coeff = fattoriale(i)/(fattoriale(j)*fattoriale(i-j));
			printf("%d\t", coeff);
		}
		printf("\n");
	}
	
	return 0;
}

int fattoriale(int a){
	int i, ris;

	for(i=1, ris=1; i<=a; i++)
		ris*=i;
	
	return ris;
}
