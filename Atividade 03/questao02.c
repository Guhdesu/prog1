#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite o valor da altura (deve ser >= 2): ");
        scanf("%d", &N);
    } while (N < 2);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf("   ");
        }

        for (int j = 1; j <= i; j++) {
            printf(" %d ", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf(" %d ", j);
        }

        printf("\n");
    }

    return 0;
}
