#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite um número: ");
    scanf("%i", &num2);

    printf("O dobro de %i é %i.\nO triplo de %i é %i.", num1, num1*2, num2, num2*3);

	sleep(2000);
    return 0;
}
