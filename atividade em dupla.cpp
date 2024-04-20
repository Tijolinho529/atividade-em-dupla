#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define TAM 3

int main(){
	//Localização.
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis.
	char disciplinas[3][200];
	float notas[3][3], media[3], soma = 0;
	int multiplicacao;
	int peso[TAM] = {3, 3, 4};
	
	//Dados do usuário.
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		
		printf("\nDigite o nome da %iº disciplina: ", i + 1);
		scanf("%s", &disciplinas[i]);
	
	for(j = 0; j < 3; j++){
	
	do{
		
		printf("\nDigite a %iº nota desta disciplina: ", j + 1);
		scanf("%f", &notas[i][j]);
		fflush(stdin);
		
		if(notas[i][j] > 10 || notas[i][j] < 0){
			printf("\nDigite números entre 0 e 10.");
		}
		
	}while(notas[i][j] > 10 || notas[i][j] < 0);

	multiplicacao = notas[i][j] * peso[j];
	soma += multiplicacao;
	media[i] = soma / 10;		
   }
 
    soma = 0;	
}
	
	
	system("cls");
	//Resultados.
	printf("---Resultados---");
	for(i = 0; i < 3; i++){
		printf("\n%iº disciplina: %s", i + 1, disciplinas[i]);
		
		for(j = 0; j < 3; j++){
			printf("\n%iº nota: %.1f Peso: %d", j + 1, notas[i][j], peso[j]);
		}
		
		printf("\nMédia: %.1f", media[i]);
	}
	
	
	
	return 0;	
}
