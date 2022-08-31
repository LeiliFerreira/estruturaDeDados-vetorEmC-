// B) Mostrar o elemento de maior valor do vetOriginal 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL,"Portuguese"); 
	
	int vetor[10]; 
	int i = 0; 
	int maior; 
	srand(time(NULL)); 
	for(i = 0; i < 10; i++) {
		vetor[i] = rand()%100; 
	}

	for(i = 0; i < 10; i++) {
		vetor[i] = vetor[i] + 1; 
		printf("%d ", vetor[i]); 
	}

	for (i = 0; i < 10; i++) {
		if (vetor[i] > maior) {
			maior = vetor[i]; 
		}
	}

	printf("\n\nElemento de maior valor: %d", maior); 
} 
