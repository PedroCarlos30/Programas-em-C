#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float celsius, fah;

    printf("Digite uma temperatura em Celsius:\n");
    scanf("%f", &celsius);

    fah = (celsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit é: %.2f.\n", fah);

	system("pause");
    return (0);
}
