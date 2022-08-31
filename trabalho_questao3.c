// C) Contabilizar quantos elementos são pares no vetOrigina. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL,"Portuguese"); 
	
	int contPar = 0; 
	int vetor[10]; 
	int i = 0; 
	srand(time(NULL)); 
	for(i = 0; i < 10; i++) {
		vetor[i] = rand()%100; 
	}

	for(i = 0; i < 10; i++) {
		vetor[i] = vetor[i] + 1; 
		printf("%d ", vetor[i]); 
	}

	for(i = 0; i < 10; i++) {
		if (vetor[i] % 2 == 0) {
			contPar = contPar + 1; 
		}
	} 
	
	printf("\n\nQuantidade de valores pares: %d", contPar); 
	return 0; 
}
	
	
	






