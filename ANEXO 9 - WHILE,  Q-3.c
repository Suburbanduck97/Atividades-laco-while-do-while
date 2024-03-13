//Incluindo bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void limpar(){
	system("cls || clear");
}

int main() {
	//Declarando vari�veis
	int idade, opcao , contadorSalario = 0, maiorIdade = 0, menorIdade = 999, mulheres5K = 0;
	char sexo;
	float salario, media , somaSalario = 0, mediaSalario;
	
	//Inicializa��o da biblioteca lingu�stica.
	setlocale(LC_ALL, "portuguese");
	
	//Inciando la�o "do-while".
	do{
		printf("=== MENU === \n");
		printf("1 - ADICIONAR PESSOA \n2 - EXIBIR RESULTADOS E SAIR \nDIGITE A OP��O DESEJADA: ");
		scanf("%d",&opcao);
			limpar();
		
		switch (opcao){
			case 1:
				printf("DIGITE A IDADE: ");
				scanf("%d",&idade);
				
				fflush(stdin);
				
				printf("DIGITE O SEXO - M OU F: ");
				scanf("%c",&sexo);
				sexo = toupper(sexo);
				
				printf("DIGITE O SAL�RIO: ");
				scanf("%f",&salario);
				limpar();
				
				//C�lculos do sistema.
				somaSalario += salario; //soma dos sal�rios inseridos.
				contadorSalario++; //Contador de s�larios inseridos.
				
				//Iniciando condicionais.
				if(idade > maiorIdade){ //Condicional para guardar a maior idade inserida.
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){ //Condicional para guardar a menor idade inserida.
					menorIdade = idade;
				}
				
				if(sexo = 'F' && salario >= 5000){ //Condicional para guardar os dados de mulheres que possuem sal�rios maiores que 5K.
					mulheres5K++; //Variavel de contabilidade que se inicia a partir da valida��o do condicional.
				}
			break;
			case 2:
				//Exibi��o de dados e c�lculos de m�dia.
				media = somaSalario	/ contadorSalario;
				
				printf("\n=== EXIBINDO RESULTADOS === \n"); 
				printf("M�DIA DO S�LARIO DO GRUPO: R$%.2f \n", mediaSalario);
				printf("MAIOR IDADE DO GRUPO: %d \n", maiorIdade);
				printf("MENOR IDADE DO GRUPO %d \n", menorIdade);
				printf("QUANTIDADE DE MULHERES COM SAL�RIO MAIOR 5K: %d", mulheres5K);
			break;
			default:
				printf("\nOP��O INV�LIDA...\n");	
		}
	}while (opcao != 2);
	
	return 0;
}
