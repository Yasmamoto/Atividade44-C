#include <stdio.h>
int main()
{
	int num;
	int calculo;

	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num > 50 && num <100){
		calculo = num*2;
		printf("o resultado do calculo do %i e igual a %i", num, calculo);
	}
	else{
		printf("Usuario nao inseriu o numero adequaqdo para o programa.");
	}
	return 0;
}
