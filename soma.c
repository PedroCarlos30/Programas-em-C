#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x, n, s;
    
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite mais um numero: ");
    scanf("%f", &n);
    
    if (x == 0 || n == 0)
    {
          
       printf("Desculpe esse calculo nao pode ser efetuado."); 
       
       }
       else {
             
         s = x + n;
          
       printf("A soma de %.1f + %.1f e igual a %.1f.\n", x, n, s);
       
       } 
   system("pause");
   return 0;      
}
