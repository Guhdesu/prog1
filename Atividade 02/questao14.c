#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (n % 2 == 0 && no % 3 == 0 && n % 5 == 0) {
        printf("O número é divisível por 2, 3 e 5\n");
    } else {
        printf("O número não é divisível por 2, 3 e 5 simultaneamente\n");
    }

    return 0;
}
