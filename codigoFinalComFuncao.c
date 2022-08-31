#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 

void gerarVetor(int *vetor) {
    for (int i = 0; i < 10; i++) {
    vetor[i] = rand() % 100;
    }
}

void mostrarVetor(int *vetor) {
    
    printf("\nVetor gerado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void maiorNumero(int *vetor) {
    int maior = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
        maior = vetor[i];
        }
    }
  
    printf("\nElemento de maior valor: %d\n", maior);
}

void numeroPar(int *vetor) {
    int contPar = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
        contPar = contPar + 1;
        }
    }
    printf("\nQuantidade de valores pares: %d\n", contPar);
}

void valorSoma(int *vetor) {
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        vetor[i] = vetor[i] + 1;
        soma = soma + vetor[i];
    }
    printf("\nSomatório dos valores: %d\n", soma);
}

void inverteVetor(int *vetor) {
    int vetorInverso[10];
    int j = 0;
    for (int i = 9; i >= 0; i--) {
        vetorInverso[j++] = vetor[i];
    }

    printf("\nVetor na ordem inversa: ");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorInverso[i]);
    }
    printf("\n\n");
}

void ordenaVetor(int *vetor) {
    int aux;
    int vetorOrdenado[10];

    for (int i = 0; i < 10; i++) {
        vetorOrdenado[i] = vetor[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetorOrdenado[i] > vetorOrdenado[j]) {
            aux = vetorOrdenado[i];
            vetorOrdenado[i] = vetorOrdenado[j];
            vetorOrdenado[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorOrdenado[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int opcaoUsuario;
    int vetor[10];
   
    printf("------------------------------MENU------------------------------------\n"); 
	printf("| Digite 1 - para criar um vetor com 10 números aleatórios            |\n"); 
	printf("| Digite 2 - para mostrar o elemento de maior valor do vetor          |\n"); 
	printf("| Digite 3 - para contabilizar quantos elementos são pares no vetor   |\n"); 
	printf("| Digite 4 - para mostrar o valor do somatório dos elementos do vetor |\n"); 
	printf("| Digite 5 - para mostrar os elementos do vetor na ordem inversa      |\n"); 
	printf("| Digite 6 - para ordenar o vetor crescentemente                      |\n"); 
	printf("| Digite 7 - para sair                                                |\n"); 
	printf("----------------------------------------------------------------------\n"); 
	printf("\nEscolha uma opção: "); 
	scanf("%d", &opcaoUsuario); 
	
	while(opcaoUsuario != 1) {
	    printf("\nÉ necessário gerar primeiramente o vetor!"); 
	    printf("\nEscolha uma opção: "); 
	    scanf("%d", &opcaoUsuario); 
	} 
	
	if (opcaoUsuario == 1) {
        gerarVetor(vetor); 
	
    while (opcaoUsuario != 7) {
        printf("\nDigite sua opção: ");
        scanf("%d", &opcaoUsuario);
   
    switch (opcaoUsuario) {
    
    case 1: 
        gerarVetor(vetor); 
        break; 
        
    case 2:
        maiorNumero(vetor);
        break;

    case 3:
        numeroPar(vetor);
        break;

    case 4:
        valorSoma(vetor);
        break;

    case 5:
        inverteVetor(vetor);
        break;

    case 6:
        ordenaVetor(vetor);
        break;

    case 7:
        printf("\nVocê saiu!"); 
        break;

    default:
      printf("\nOpção inválida!");
    }
    
    mostrarVetor(vetor);
    }
  }
} 
