#include <stdio.h>
#include <locale.h>

int main()
{
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número inteiro qualquer:\a ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("%d é POSITIVO.", num);
	}
	
	else if(num < 0){
		printf("%d é NEGATIVO.", num);
	}
	
	else{
		printf("%d é NEUTRO.", num);
	}
		
	return (0);
}
