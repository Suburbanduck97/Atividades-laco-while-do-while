#include <stdio.h>
#include <locale.h>

void limpar(){
	system("cls || clear");
}

int main() {
	int opcoes, numeroDeFilhos,somaFilhos = 0, mediaNumeroDeFilhos, contadorNumeroDeFilhos;
	float salario, somaSalario = 0, mediaSalario, contadorSalario, maiorSalario = 0, menorSalario = 999999999;
	
	setlocale(LC_ALL, "portuguese");
	
	//Iniciando la�o do-while.
	do{
		//Menu com switch-case.
		printf("=== MENU IBGE === \n\n 1) ADICIONAR FAM�LIA \n2)SAIR E EXIBIR RESULTADOS \n\nDIGITE A OP��O DESEJADA: ");
		scanf("%d",&opcoes);
		limpar();
		
		//Escolha - caso.
		switch(opcoes){
			case 1: //Solicitando dados.
			printf("DIGITE A QUANTIDADE DE FILHOS NA FAM�LIA: ");
			scanf("%d",&numeroDeFilhos);
			//Contador de n�meros de filhos.
			
			contadorNumeroDeFilhos++;
		
			printf("DIGITE O S�LARIO MENSAL BRUTO DA FAM�LIA: ");
			scanf("%f",&salario);
			
			//C�lculo do sistema.
			//soma sal�rio:
			somaSalario += salario;
			
			//contador sal�rio:
			contadorSalario++;
			
			//
			//Condicional para maior e menor sal�rio:
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
			printf("M�DIA DOS N�MEROS DE FILHOS DAS FAM�LIAS: %d\n", mediaNumeroDeFilhos);
			printf("M�DIA DOS SAL�RIOS DAS FAM�LIAS: %.2f\n", mediaSalario);
			printf("MAIOR SAL�RIO: %.2f\n", maiorSalario);
			printf("MENOR SAL�RIO: %.2f\n",menorSalario);
	break;
	default:
			printf("OP��O INV�LIDA...\n");					
		}
	}while(opcoes !=2);
	
	return 0;
	
}
