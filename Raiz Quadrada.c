#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raizQ;
	
	printf("Digite 0 quando quiser sair!");
	getch(0);
	system("cls");
	
	while(raizQ =! 0){
		
		printf("Digite o valor dentro da raiz: ");
		scanf("%f", &raizQ);
		
		if(raizQ==0)exit(0);
		
		raizQ = sqrt(raizQ);
		
		system("cls");
		printf("O valor da raiz é: %.2f\n\n", raizQ);
	}
	
	printf("Aperte qualquer botão para sair!");
	getch(0);
}
