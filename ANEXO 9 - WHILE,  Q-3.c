//Incluindo bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void limpar(){
	system("cls || clear");
}

int main() {
	//Declarando variáveis
	int idade, opcao , contadorSalario = 0, maiorIdade = 0, menorIdade = 999, mulheres5K = 0;
	char sexo;
	float salario, media , somaSalario = 0, mediaSalario;
	
	//Inicialização da biblioteca linguística.
	setlocale(LC_ALL, "portuguese");
	
	//Inciando laço "do-while".
	do{
		printf("=== MENU === \n");
		printf("1 - ADICIONAR PESSOA \n2 - EXIBIR RESULTADOS E SAIR \nDIGITE A OPÇÃO DESEJADA: ");
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
				
				printf("DIGITE O SALÁRIO: ");
				scanf("%f",&salario);
				limpar();
				
				//Cálculos do sistema.
				somaSalario += salario; //soma dos salários inseridos.
				contadorSalario++; //Contador de sálarios inseridos.
				
				//Iniciando condicionais.
				if(idade > maiorIdade){ //Condicional para guardar a maior idade inserida.
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){ //Condicional para guardar a menor idade inserida.
					menorIdade = idade;
				}
				
				if(sexo = 'F' && salario >= 5000){ //Condicional para guardar os dados de mulheres que possuem salários maiores que 5K.
					mulheres5K++; //Variavel de contabilidade que se inicia a partir da validação do condicional.
				}
			break;
			case 2:
				//Exibição de dados e cálculos de média.
				media = somaSalario	/ contadorSalario;
				
				printf("\n=== EXIBINDO RESULTADOS === \n"); 
				printf("MÉDIA DO SÁLARIO DO GRUPO: R$%.2f \n", mediaSalario);
				printf("MAIOR IDADE DO GRUPO: %d \n", maiorIdade);
				printf("MENOR IDADE DO GRUPO %d \n", menorIdade);
				printf("QUANTIDADE DE MULHERES COM SALÁRIO MAIOR 5K: %d", mulheres5K);
			break;
			default:
				printf("\nOPÇÃO INVÁLIDA...\n");	
		}
	}while (opcao != 2);
	
	return 0;
}
