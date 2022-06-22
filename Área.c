#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float area, b, a;
	
	printf("Digite 0 quando quiser sair!");
	getch(0);
	system("cls");
	
	while(b != 0){
		
		printf("Digite o valor da base: ");
		scanf("%f", &b);
		printf("\nDigite o valor da altura: ");
		scanf("%f", &a);
		
		area = b*a;
		
		printf("\nO valor da área é de %.2fm²\n\n", area);
	}
}
