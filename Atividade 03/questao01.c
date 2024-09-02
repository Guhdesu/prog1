#include <stdio.h>

int main() {
    int altura;

    printf("Informe a altura do Triângulo de Pascal: ");
    scanf("%d", &altura);

    for (int i = 0; i < altura; i++) {
        int valor = 1;

        for (int j = 0; j < altura - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", valor); 
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n"); 
    }

    return 0;
}
