#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int divisor1 = 10;
    int divisor2 = 100;
    int divisor3 = 1000;
    int maisProximo;
    int menorDistancia;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int distancia1 = abs(numero - divisor1);
    int distancia2 = abs(numero - divisor2);
    int distancia3 = abs(numero - divisor3);

    maisProximo = divisor1;
    menorDistancia = distancia1;

    if (distancia2 < menorDistancia) {
        menorDistancia = distancia2;
        maisProximo = divisor2;
    } else if (distancia2 == menorDistancia) {
        if (divisor2 > maisProximo) {
            maisProximo = divisor2;
        }
    }

    if (distancia3 < menorDistancia) {
        menorDistancia = distancia3;
        maisProximo = divisor3;
    } else if (distancia3 == menorDistancia) {
        if (divisor3 > maisProximo) {
            maisProximo = divisor3;
        }
    }

    printf("O numero %d esta mais proximo de %d.\n", numero, maisProximo);

    return 0;
}
