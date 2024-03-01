#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float peso, autura, i_m_c;
    
    printf("Digite seu peso (em quilogramas): ");
    scanf("%f", &peso);
    printf("Digite sua autura (em metros): ");
    scanf("%f", &autura);
    i_m_c = (peso / (autura * autura));
    printf("Seu IMC é: %.2f", i_m_c);
    return 0;
}
