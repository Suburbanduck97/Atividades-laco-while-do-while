#include <stdio.h>
#include <locale.h>

int main(){
	float media;
	int contador, soma = 0, nota = 1;
	
	setlocale(LC_ALL, "portuguese");
	
	while(nota >= 0){
		printf("INSIRA UM VALOR: ");
		scanf("%d",&nota);
		
		if(nota >= 0){
			soma = soma + nota;
			contador = contador + 1;	
		}
	}
	
	if (contador == 0) {
			printf("NÃO FOI INFORMADO UM VALOR POSITIVO.");
		}else{
			media = soma / contador;
			printf("MÉDIA: %.1f \n", media);
		}	
		return 0;
	}
