#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int v[10], i;
	for(i = 0; i < 10; i++){
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &v[i]);
	}
	printf("\n\nVetor\n\n");
	for(i = 0; i < 10; i++){
		printf("%d \n", v[i]);
	}
	printf("\n\nVetor invertido\n\n");
	for(i = 9; i >= 0; i--){
			printf("%d \n", v[i]);
	}
	
	return 0;
}