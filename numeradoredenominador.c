#include <stdio.h>
#include <locale.h>

int main()
{
	int nume = 0;
	int denom = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número para \"numerador\":\a ");
	scanf("%d", &nume);
	
	printf("Digite um número para \"denominador\":\a ");
	scanf("%d", &denom);
	
	if(denom == 0){
		printf("A divisão é indefinida.");
	}
	
	else if(nume % denom == 0){
		printf("A divisão de %d por %d é EXATA, pois %d / %d = %d e o resto da divisão é %d.", nume, denom, nume, denom, nume / denom, nume % denom);
	}
	
	else{
		printf("A divisão de %d por %d NÃO EXATA, pois o resto da divisão é %d.", nume, denom, nume % denom);
	}
	
	return (0);
}
