#include <stdio.h>

int main() {
	int N;

	printf("Digite o valor da largura central: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf(" X");
		}
		
		
		printf("\n");
	}
	
	for (int i = N-1; i >= 1; i--) {
		for (int j = 1; j <= N - i; j++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf(" X");
		}
		printf("\n");
	    
	}

	return 0;
}
