#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num1 = 0, num2 = 0;
	int operacao = 0;

	printf("\n_________________________\n");
	printf("\n1 Adição\n");
	printf("2 Subtração\n");
	printf("3 Multiplicação\n");
	printf("4 Divisão\n");
	printf("_________________________\n");
	printf("Qual das quatro operações você quer efetuar: \n");
	scanf("%d", &operacao);

	printf("Digite um número: ");
	scanf("%f", &num1);
	
	printf("Digite um número: ");
	scanf("%f", &num2);
	
	switch(operacao){
		
		case 1:
			printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
			break;
		case 2:
			printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
			break;
		case 3:
			printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
			break;
		case 4:
			//Aqui o if-else verifica e informa 
			if(num2 == 0){
				printf("\nA divisão é indefinida!");
			} else{
				printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
			}
			break;
		default:
			printf("Essa operação não pode ser realizada.");
			break;
	}
	puts("\n");
	system("pause");
	return (0);	
}
