#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float volume, comprimento, largura, autura;

    printf("DÃ­gite o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite o valor da largura: ");
    scanf("%f", &largura);
    printf("Digite o valor da autura: ");
    scanf("%f", &autura);

    volume = comprimento * largura * autura;

    printf("O valor do volume é: %.2f\n", volume);

	system("pause");
    return 0;
}
