#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	//Declarando variável.
	char login[100] , loginInserido[100] = "ericsson", senha[100], senhaInserida[100] = "Senai2024";
	int tentativa = 0;
	
	setlocale(LC_ALL, "portuguese");

	//Laço de repetição while.
	while(strcmp(login,loginInserido) != 0 || strcmp(senha,senhaInserida) != 0){

		//Solicitando dados.
		printf("INSIRA SEU LOGIN: ");
		scanf("%s",&login);
		
		printf("INSIRA SUA SENHA: ");
		scanf("%s",&senha);

		//Contador de tentativas.
		tentativa++;
		
		system("cls || clear");

		//Condicional para validação de login.
		if(strcmp(login,loginInserido) == 0 && strcmp(senha,senhaInserida) == 0){ //Login e Senha corretas.
			puts("\n=== BEM VINDO AO PORTAL DO ALUNO ===");
		}else{ //Login ou Senha incorretas.
			puts("=== REPITA SEUS DADOS DE LOGIN ===");
		}
		
		if(tentativa == 3){ //Caso o número de tentativas de login chegue em 3, programa se encerra.
			printf("\nNÚMEROS DE TENTATIVAS EXCEDIDAS...\n");
			break;
		}
	}

	//Fim do programa.
	return 0;
}
