/*Scrivere un programma che ricevuto in ingresso un numero intero 
positivo o nullo, calcola e visualizza il suo fattoriale. Estendere 
il programma aggiungendo un controllo sul dato in ingresso: il 
programma continua a richiede il valore fin quando l'utente 
inserisce un valore non valido.*/

#include<stdio.h>

int main() {
	int n, f, i;

	do {
		scanf("%d", &n);
	} while (n<0);

	f=1;
	i=2;
	while (i<=n){
		f=f*i;
		i++;
	}

	printf("%d\n", f);
	
	return 0;
}
