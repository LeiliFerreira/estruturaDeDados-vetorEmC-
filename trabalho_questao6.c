// F) Ordenar o vetor de forma crescente. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL,"Portuguese"); 
	
	int vetor[10]; 
	int i = 0; 
	int j; 
	int aux; 
	srand(time(NULL)); 
	for(i = 0; i < 10; i++) {
		vetor[i] = rand()%100; 
	}

	for(i = 0; i < 10; i++) {
		vetor[i] = vetor[i] + 1; 
		printf("%d ", vetor[i]); 
	}
	
	for(i = 0; i < 10; i++) {
		for (j = i+1; j < 10; j++) {
			if(vetor[i] > vetor[j]) {
				aux = vetor[i]; 
				vetor[i] = vetor[j]; 
				vetor[j] = aux; 
			}
		}
	}

	for(i = 0; i < 10; i++) {
		printf("\n\n%d", vetor[i]); 
	}
} 

