#include <stdio.h>
#include <locale.h>

int main(){
	//Declarando variáveis.
	int numero = 1, soma = 0, contador = 0, par = 0 , impar = 0;
	float media;
	
	setlocale(LC_ALL, "portuguese");
	while(numero>0){
		
		//Inserido valores.
		printf("INSIRA UM NÚMERO INTEIRO: ");
		scanf("%d",&numero);
		
		//Cálculo do sistema
		contador = contador + 1;
		par = par + (numero % 2 == 0);
		impar = impar + (numero % 2 != 0);
		soma = soma + numero;
		
		//Condicional p/ a exclusão do número 0.
		if(numero > 0){
			media = soma / contador;
		}
		
		//Parada do laço.
		if(numero <= 0){
			break;
		}
	}

	//Exibindo dados.
	printf("\n\nQUANTIDADES DE NÚMEROS PARES: %d", par);
	printf("\nQUANTIDADES DE NÚMEROS ÍMPARES: %d", impar);	
	printf("\nMÉDIA DOS NÚMEROS: %.1f",media);
	
	return 0;
}
