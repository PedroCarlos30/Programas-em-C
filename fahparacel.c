#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float celsius, fah;

    printf("Digite uma temperatura em Fahrenheit:\n");
    scanf("%f", &fah);

    celsius = (fah - 32) / 1.8;

    printf("A temperatura em Celsius é: %.2f.\n", celsius);
	
	system("pause");
    return 0;
}
