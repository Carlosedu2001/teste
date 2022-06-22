#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float lq, lr1, lr2, pq, pr;
	
	printf("Digite 1 para calcular o perímetro do quadrado!");
	printf("\nDigite 2 para calcular o perímetro do retângulo!");
	printf("\nDigite 0 quando quiser sair!\n\n");
	scanf("%d", &n);
	system("cls");
	
	switch(n){
		
		case 1:{
			
			printf("Digite o valor dos lados: ");
			scanf("%f", &lq);
			
			pq = 4*lq;
			
			printf("\nO valor do perímetro é %.2fc²\n\n", pq);
			break;
		}
		
		case 2:{
			
			printf("Digite o valor do lado 1: ");
			scanf("%f", &lr1);
			printf("Digite o valor do lado 2: ");
			scanf("%f", &lr2);
			
			pr = 2*lr1+2*lr2;
			
			printf("\nO valor do perímetro é %.2fc²\n\n", pr);
			break;
		}
		
		case 0:{
			
			break;
		}
	}
	
	printf("Aperta qualquer botão para sair!");
	getch(0);
}
