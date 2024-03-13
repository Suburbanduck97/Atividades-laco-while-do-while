#include <stdio.h>
#include <locale.h>

void limpar(){
	system("cls || clear");
}

int main() {
	int opcoes, numeroDeFilhos,somaFilhos = 0, mediaNumeroDeFilhos, contadorNumeroDeFilhos;
	float salario, somaSalario = 0, mediaSalario, contadorSalario, maiorSalario = 0, menorSalario = 999999999;
	
	setlocale(LC_ALL, "portuguese");
	
	//Iniciando laço do-while.
	do{
		//Menu com switch-case.
		printf("=== MENU IBGE === \n\n 1) ADICIONAR FAMÍLIA \n2)SAIR E EXIBIR RESULTADOS \n\nDIGITE A OPÇÃO DESEJADA: ");
		scanf("%d",&opcoes);
		limpar();
		
		//Escolha - caso.
		switch(opcoes){
			case 1: //Solicitando dados.
			printf("DIGITE A QUANTIDADE DE FILHOS NA FAMÍLIA: ");
			scanf("%d",&numeroDeFilhos);
			//Contador de números de filhos.
			
			contadorNumeroDeFilhos++;
		
			printf("DIGITE O SÁLARIO MENSAL BRUTO DA FAMÍLIA: ");
			scanf("%f",&salario);
			
			//Cálculo do sistema.
			//soma salário:
			somaSalario += salario;
			
			//contador salário:
			contadorSalario++;
			
			//
			//Condicional para maior e menor salário:
			if(salario > maiorSalario){
				maiorSalario = salario;
			}
			if(salario < menorSalario){
				menorSalario = salario;
			} 
			
			limpar();
	break ;
	case 2: //Exibindo dados e encerrando o programa.
			mediaNumeroDeFilhos = numeroDeFilhos / contadorNumeroDeFilhos;
			mediaSalario = somaSalario / contadorSalario;
			
			puts("=== EXIBINDO DADOS ===\n\n");
			printf("MÉDIA DOS NÚMEROS DE FILHOS DAS FAMÍLIAS: %d\n", mediaNumeroDeFilhos);
			printf("MÉDIA DOS SALÁRIOS DAS FAMÍLIAS: %.2f\n", mediaSalario);
			printf("MAIOR SALÁRIO: %.2f\n", maiorSalario);
			printf("MENOR SALÁRIO: %.2f\n",menorSalario);
	break;
	default:
			printf("OPÇÃO INVÁLIDA...\n");					
		}
	}while(opcoes !=2);
	
	return 0;
	
}
