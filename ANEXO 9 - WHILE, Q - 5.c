#include <stdio.h>
#include <locale.h>

//Definindo constante.
#define N 54

int main() {
	int numero, i, numeroCorreto = N, tentativas = 0;
	
	setlocale(LC_ALL, "portuguese");
	puts("=== TENTE ACERTAR O N�MERO SECRETO===\n");
	
	//	
	while(numero != numeroCorreto){
		printf("DIGITE UM N�MERO 1 A 100: ");
		scanf("%d",&numero);
		system("cls || clear");
		
		tentativas++;
		
		if(numero > 100 || numero <= 0 ){
		printf("\nINSIRA UM N�MERO V�LIDO...\n\n");
		}else if(numero < numeroCorreto){
			printf("\nDICA: %d � MENOR QUE O N�MERO SECRETO\n\n", numero);
		}else if(numero > numeroCorreto){
			printf("\nDICA: %d � MAIOR QUE O N�MERO SECRETO!\n\n", numero);
		}else if(numero == numeroCorreto && tentativas == 1){
			printf("\nINCR�VEL!! VOC� ACERTOU DE PRIMEIRA.");
		}else if(numero == numeroCorreto){
			printf("\nPARAB�NS!! VOC� ACERTOU.");
		}
		
	
		
	}

printf("\n\nN�MEROS DE TENTATIVAS: %d", tentativas);
return 0;

}
