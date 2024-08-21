#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o comprimento dos três lados do triângulo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("O triângulo é equilátero.");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.");
        } else {
            printf("O triângulo é escaleno.");
        }
    } else {
        printf("Os lados  não formam um triângulo.\n");
    }

    return 0;
}
