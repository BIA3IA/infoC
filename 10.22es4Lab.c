/*Scrivere un programma che riceve in ingresso un numero positivo
pari n; il programma continuerà a richiedere il numero n finché la
condizione non sarà soddisfatta. In seguito, il programma disegna a
video un triangolo con base n utilizzando il carattere * come
mostrato nel seguente esempio.
Esempio: Sia n=10, il disegno da mostrare è
    **
   ****
  ******
 ********
**********     */

#include<stdio.h>
#define BASE 2

int main() {
	int n, i, j;

	do
		scanf("%d", &n);
	while(n<=0 || n%BASE);

	
	for(j=1; j<=n/BASE; j++){
		for(i=1; i<=n; i++){
			if(i<=(n/BASE-j) || i>(n/BASE-j)+j*2){
				printf(" ");
			} else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}
