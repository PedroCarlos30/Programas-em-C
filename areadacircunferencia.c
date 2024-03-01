#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float area, PI, raio;
    PI = 3.14;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);
    
    area = PI*(raio*raio);

    printf("A área da circunferência é: %.2f.", area);
    
    system("pause");
    return 0;
}
