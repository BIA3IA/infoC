/*Scrivere un programma che analizza un sequenza di numeri interi di 
lunghezza indefinita terminata dal valore 0 (che non fa parte della 
sequenza). In particolare, per ciascun valore letto, il programma 
stabilisce se questo è il doppio del suo precedente; in tal caso 
stampa a video la coppia di numeri. NOTA: attenzione al casoui la 
sequenza sia vuota (cioè l'utente inserisce 0 come primo valore).
Esempio:
L'utente inserisce la sequenza: 1 2 5 2 4 8 5 4 5 0
Il programma stamperà
1 2
2 4
4 8*/

#include<stdio.h>
#define MULTIPLO 2

int main() {
	int prec, n;

	scanf("%d", &prec);

	if (prec!=0){
		scanf("%d", &n);
		while (n!=0){
			if (prec*MULTIPLO==n){
				printf("%d %d\n", prec, n);
			}
			prec=n;
			scanf("%d", &n);
		}
	} else
		printf("Sequenza vuota\n");
	
	return 0;
}
