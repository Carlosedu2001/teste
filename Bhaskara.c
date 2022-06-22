#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b ,c, delta;
	float x1, x2;
	
	printf("Digite 0 quando quiser sair!");
	getch(0);
	system("cls");
	
	while(a =! 0){
		
		printf("Digite o valor de a: ");
		scanf("%d", &a);
		printf("Digite o valor de b: ");
		scanf("%d", &b);
		printf("Digite o valor de c: ");
		scanf("%d", &c);
		
		if(a == 0 || b == 0 || c == 0)exit(0);
		
		delta = pow(b,2)-4*a*c;
		
		if(delta < 0){
			printf("\nDelta negativo (%d), equação não possui raízes reais.", delta);
			getch(0);
			exit(0);
		}
		
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		
		system("cls");
		printf("O valor de delta é: %d\nO valor de x1 é: %.4f\nO valor de x2 é: %.4f\n\n", delta, x1, x2);
		if(delta==0){
			printf("Quando delta é igual a 0, há apenas um valor real ou dois resultados iguais.");
			getch(0);
			printf("\n\n");
		}
	}
	
	printf("Aperte qualquer botão para sair!");
	getch(0);
}
