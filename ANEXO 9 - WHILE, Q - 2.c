#include <stdio.h>
#include <locale.h>

int main(){
	//Declarando vari�veis.
	int numero = 1, soma = 0, contador = 0, par = 0 , impar = 0;
	float media;
	
	setlocale(LC_ALL, "portuguese");
	while(numero>0){
		
		//Inserido valores.
		printf("INSIRA UM N�MERO INTEIRO: ");
		scanf("%d",&numero);
		
		//C�lculo do sistema
		contador = contador + 1;
		par = par + (numero % 2 == 0);
		impar = impar + (numero % 2 != 0);
		soma = soma + numero;
		
		//Condicional p/ a exclus�o do n�mero 0.
		if(numero > 0){
			media = soma / contador;
		}
		
		//Parada do la�o.
		if(numero <= 0){
			break;
		}
	}

	//Exibindo dados.
	printf("\n\nQUANTIDADES DE N�MEROS PARES: %d", par);
	printf("\nQUANTIDADES DE N�MEROS �MPARES: %d", impar);	
	printf("\nM�DIA DOS N�MEROS: %.1f",media);
	
	return 0;
}
