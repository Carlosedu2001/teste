#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, y, media,f;
	
	do{
	
	do{
		printf("Digite sua primeira nota: ");
		scanf("%f", &x);
		printf("Digite sua segunda nota: ");
		scanf("%f", &y);
	}while(x>10 || x<0 || y>10 || y<0);
		
	media = (x+y)/2;
	
	if(media >= 6){
		printf("\nAluno aprovado - Nota: %.2f\n\n", media);
		}else{
			printf("\nAluno reprovado - Nota: %.2f\n\n", media);
		}
		printf("Digite 0 caso queira sair ou qualquer outro número para reiniciar\n\n");
		scanf("%d",&f);
		system("cls");
	}while(f!=0);
}
