#include <stdio.h>
#include <locale.h>

//Definindo constante.
#define N 54

int main() {
	int numero, i, numeroCorreto = N, tentativas = 0;
	
	setlocale(LC_ALL, "portuguese");
	puts("=== TENTE ACERTAR O NÚMERO SECRETO===\n");
	
	//	
	while(numero != numeroCorreto){
		printf("DIGITE UM NÚMERO 1 A 100: ");
		scanf("%d",&numero);
		system("cls || clear");
		
		tentativas++;
		
		if(numero > 100 || numero <= 0 ){
		printf("\nINSIRA UM NÚMERO VÁLIDO...\n\n");
		}else if(numero < numeroCorreto){
			printf("\nDICA: %d É MENOR QUE O NÚMERO SECRETO\n\n", numero);
		}else if(numero > numeroCorreto){
			printf("\nDICA: %d É MAIOR QUE O NÚMERO SECRETO!\n\n", numero);
		}else if(numero == numeroCorreto && tentativas == 1){
			printf("\nINCRÍVEL!! VOCÊ ACERTOU DE PRIMEIRA.");
		}else if(numero == numeroCorreto){
			printf("\nPARABÉNS!! VOCÊ ACERTOU.");
		}
		
	
		
	}

printf("\n\nNÚMEROS DE TENTATIVAS: %d", tentativas);
return 0;

}
