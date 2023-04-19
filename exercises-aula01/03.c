// Some 3 números inteiros digitados pelo usuário
#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Type 3 numbers to sum: \n");

	printf("n1 >>> ");
	scanf("%d", &n1);
	printf("n2 >>> ");
	scanf("%d", &n2);
	printf("n3 >>> ");
	scanf("%d", &n3);

	int sum = n1 + n2 + n3;

	printf("The result: %d\n", sum);

	return 0;
}
