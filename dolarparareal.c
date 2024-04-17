#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    inicio:	
    setlocale(LC_ALL, "Portuguese");
    float dolar, real;

    printf("Qual a atual cotacão do dolar:\n");
    scanf("%f", &dolar);

    printf("Qual o valor em reais:\n");
    scanf("%f", &real);

    printf("A conversão é R$%.2f.\n", real/dolar);
    printf("\n\n");
    goto inicio;
//uso do "goto" para repetir o programa.
	system("pause");
    return 0;
}
