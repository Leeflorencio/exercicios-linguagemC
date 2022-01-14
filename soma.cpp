#include<stdio.h>
#include<stdlib.h>

main(){
	int a, b, soma;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	soma = a+b;
	printf("A soma de a e b = %d", soma);
	system("pause");
}
