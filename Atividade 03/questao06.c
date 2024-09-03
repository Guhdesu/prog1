#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, L;

    printf("Digite o valor da base B da árvore: ");
    scanf("%d", &B);
    if (B % 2 == 0 || B < 3) {
        printf("ERRO, B deve ser ímpar e maior ou igual a 3.\nReiniciando programa\n");
        main();
    }
    
    printf("Digite o valor da largura L do tronco da árvore: ");
    scanf("%d", &L);
    if (L < 1 || L % 2 == 0 || L > (B / 2)) {
        printf("ERRO, L deve ser maior ou igual a 1, ímpar, e não deve ultrapassar a metade da base.\nReiniciando programa\n");
        main();
    }
    
    printf("Digite o valor da altura A do tronco da árvore: ");
    scanf("%d", &A);
    if (A < 2 || A > (B / 2)) {
        printf("ERRO, A deve ser maior ou igual a 2 e não deve ultrapassar a metade da base.\nReiniciando programa\n");
        main();
    }

    for (int i = 1; i <= B; i++) {
        for (int j = 1; j <= B - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }


    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= B - (L / 2) - 1; j++) {
            printf(" ");
        }

        for (int j = 1; j <= L; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
