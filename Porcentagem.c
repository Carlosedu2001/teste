#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float porcentagem, porcentagem2, valor, valor1, valor2, valorT, valorT2;
	
	printf("Digite 1 para saber o valor!\n");
	printf("Digite 2 para saber a porcentagem!\n");
	printf("Digite 0 para sair!\n\n");
	scanf("%d", &n);
	system("cls");
	
	switch(n){
		
		case 1:
			do{
				printf("Digite o valor: R$");
				scanf("%f", &valor);
				printf("Digite a porcentagem: ");
				scanf("%f", &porcentagem);
				
				if(valor == 0 || porcentagem == 0){
					printf("\nAperte qualquer botão para sair!");
					getch(0);
					exit(0);
				}
				
				valorT = valor-(valor*(porcentagem/100));
				valor = valor*(porcentagem/100);
				
				printf("\nO valor total aplicando %.f%% é de R$%.2f (Valor da %%: R$%.2f)\n\n", porcentagem, valorT, valor);				
			}while(valor != 0);
			
		case 2:
			do{
				printf("Digite o valor total: R$");
				scanf("%f", &valor1);
				printf("Digite o valor correspondente a %% que você quer saber: R$");
				scanf("%f", &valor2);
				
				if(valor1 == 0 || valor2 == 0){
					printf("\nAperte qualquer botão para sair!");
					getch(0);
					exit(0);
				}
				
				porcentagem2 = (valor2*100)/valor1;
				valorT2 = valor1*(porcentagem2/100);
				
				printf("\nA %% correspondente ao valor inserido é de %.f%% (Valor: R$%.2f)\n\n", porcentagem2, valorT2);				
			}while(valor1 != 0);
			
		case 0:
			break;
	}
	
	printf("Aperte qualquer botão para sair!");
	getch(0);
}
