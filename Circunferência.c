#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float c=1, pi=3.14;
	int r;
	
	printf("Digite 0 quando quiser sair!");
	getch(0);
	system("cls");
	// Circunfer�ncia = 2.pi.raio
	
	while(c != 0){
		
		printf("Digite o valor do raio: ");
		scanf("%d", &r);
	
		c = 2*pi*r;
	
		system("cls");
		printf("O valor da circunfer�ncia �: %.2f\n\n", c);
	}
	
	printf("Aperte qualquer bot�o para sair!");
	getch(0);
}
