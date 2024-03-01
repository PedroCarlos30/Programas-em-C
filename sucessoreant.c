#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um número inteiro para saber seu antecessor e sucessor:\n");
    scanf("%i", &num);

    printf("O antecessor de %i é: %i.\nO sucessor de %i é: %i.\n", num, num-1, num, num+1);
    
    system("pause");
    return (0);
}
