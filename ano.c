#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Qual a sua idade: ");
    scanf("%i", &idade);

printf("A quantidade de dias que você ja viveu e aproximadamente: %i dias.\n", idade*365);

//sem contar os anos bissextos
    
    system("pause");
    return 0;
}
