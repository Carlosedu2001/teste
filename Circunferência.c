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
	// Circunferência = 2.pi.raio
	
	while(c != 0){
		
		printf("Digite o valor do raio: ");
		scanf("%d", &r);
	
		c = 2*pi*r;
	
		system("cls");
		printf("O valor da circunferência é: %.2f\n\n", c);
	}
	
	printf("Aperte qualquer botão para sair!");
	getch(0);
}
