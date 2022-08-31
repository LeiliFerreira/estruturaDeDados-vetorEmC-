#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese"); 
	
	int opcaoUsuario; 
	int vetor[10]; 
	int i = 0; 
	int escolhaUsuario; 
	int maior; 
	int contPar; 
	int soma; 
	int j; 
	int aux; 
	int continuar; 
	
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

	if(opcaoUsuario == 7) {
		printf("\nFinalizando..."); 
		sleep(3); 
		system("cls"); 
		printf("Você saiu!"); 
		exit(0); 
	}

	if (opcaoUsuario == 1) {
		srand(time(NULL)); 
				for(i = 0; i < 10; i++) {
					vetor[i] = rand()%100; 
				}
				printf("\nVetor gerado: "); 
				for(i = 0; i < 10; i++) {
					vetor[i] = vetor[i] + 1; 
					printf("%d ", vetor[i]); 			
				}
	} 
	
	while(opcaoUsuario != 1 && opcaoUsuario != 7) {
		printf("\nÉ necessário gerar o vetor primeiramente."); 
		sleep(3); 
		system("cls"); 
		return main(); 
	}	
	
	printf("\n\nAgora que o vetor foi gerado escolha uma opção do menu para continuar: "); 
	scanf("%d", &escolhaUsuario); 
	
	while(escolhaUsuario == 1 ) {
		printf("\nO vetor já foi gerado, escolha outra opção para continuar: "); 
		scanf("%d", &escolhaUsuario); 
	}
	
	switch(escolhaUsuario) {
		case 2:  
			for (i = 0; i < 10; i++) {
				if (vetor[i] > maior) {
					maior = vetor[i]; 
				}
			} 
			printf("\n"); 
			printf("Elemento de maior valor:  %d", maior); 
			
			printf("\n\nDigite 1 para retornar ao menu principal: "); 
			scanf("%d", &continuar); 
			
			while(continuar != 1) {
				printf("\nOpção inválida! \n 1 - para retornar ao menu principal: "); 
				scanf("%d",&continuar); 
				
			}
			
			if (continuar == 1) {
				system("cls"); 
				return main(); 
			}		 
		break; 
		
		case 3: 
			for(i = 0; i < 10; i++) {
				if (vetor[i] % 2 == 0) {
					contPar = contPar + 1; 
				}			
			} 
			printf("\nQuantidade de valores pares: %d", contPar); 
			
			printf("\n\nDigite 1 para retornar ao menu principal: "); 
			scanf("%d", &continuar); 
			
			while(continuar != 1) {
				printf("\nOpção inválida! \n 1 - para retornar ao menu principal: "); 
				scanf("%d",&continuar); 
				
			}
			
			if (continuar == 1) {
				system("cls"); 
				return main(); 
			}		 
		break; 
		
		case 4: 
			for(i = 0; i < 10; i++) {
				vetor[i] = vetor[i] + 1; 
				soma = soma + vetor[i]; 
			}	
			printf("\nSomatório dos valores: %d", soma); 
	
			printf("\n\nDigite 1 para retornar ao menu principal: "); 
			scanf("%d", &continuar); 
			
			while(continuar != 1) {
				printf("\nOpção inválida! \n 1 - para retornar ao menu principal: "); 
				scanf("%d",&continuar); 
				
			}
			
			if (continuar == 1) {
				system("cls"); 
				return main(); 
			}		 
		break; 
		
		case 5: 
			printf("\nOrdem inversa do vetor:  "); 
			for(i = 9; i >=0; i--) {
				printf("%d ",vetor[i]); 
			}
		
			printf("\n\nDigite 1 para retornar ao menu principal: "); 
			scanf("%d", &continuar); 
			
			while(continuar != 1) {
				printf("\nOpção inválida! \n 1 - para retornar ao menu principal: "); 
				scanf("%d",&continuar); 
				
			}
			
			if (continuar == 1) {
				system("cls"); 
				return main(); 
			}		 
		break; 
	
		case 6: 
			printf("\nOrdem crescente do vetor: "); 
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
				printf("%d ", vetor[i]); 
			}	
		
			printf("\n\nDigite 1 para retornar ao menu principal: "); 
			scanf("%d", &continuar); 
			
			while(continuar != 1) {
				printf("\nOpção inválida! \n 1 - para retornar ao menu principal: "); 
				scanf("%d",&continuar); 
				
			}
			
			if (continuar == 1) {
				system("cls"); 
				return main(); 
			}		 
		break;	
		}
	} 

