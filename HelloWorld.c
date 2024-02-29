#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nHello World!\n");
    systm("pause");
    return 0;
}
