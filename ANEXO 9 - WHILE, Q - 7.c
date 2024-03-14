#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char login[100] , loginInserido[100] = "ericsson", senha[100], senhaInserida[100] = "Senai2024";
	int tentativa = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	while(strcmp(login,loginInserido) != 0 || strcmp(senha,senhaInserida) != 0){
		
		printf("INSIRA SEU LOGIN: ");
		scanf("%s",&login);
		
		printf("INSIRA SUA SENHA: ");
		scanf("%s",&senha);
		
		tentativa++;
		
		system("cls || clear");
		
		if(strcmp(login,loginInserido) == 0 && strcmp(senha,senhaInserida) == 0){
			puts("\n=== BEM VINDO AO PORTAL DO ALUNO ===");
		}else{
			puts("=== REPITA SEUS DADOS DE LOGIN ===");
		}
		
		if(tentativa == 3){
			printf("\nNÚMEROS DE TENTATIVAS EXCEDIDAS...\n");
			break;
		}
	}
	
	return 0;
}
