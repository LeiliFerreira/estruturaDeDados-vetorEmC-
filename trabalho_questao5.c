// E) Coloque os elementos na ordem inversa do vetOriginal. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL,"Portuguese"); 
	
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
	
	for(i = 9; i >=0; i--) {
		printf("\n\n%d",vetor[i]); 
	}
	
	
	return 0; 
}


