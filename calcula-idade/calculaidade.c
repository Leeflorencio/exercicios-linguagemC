#include<stdio.h>
#include<stdlib.h>
main(){
	int soma, idade1, idade2;
	printf("Digite a idade1: ");
	scanf("%d", idade1);
	printf("Digite a idade2: ");
	scanf("%d", idade2);
	soma = idade1 + idade2;
	printf("o resultado da soma das idades e %d",soma);
	printf("\n\n");
	system("pause");
}
