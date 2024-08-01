#include <stdio.h>

int main() {
    float altura, largura;

    printf("Olá, insira a altura do retângulo: ");
    scanf("%f", &altura);

    printf("Olá, insira a largura do retângulo: ");
    scanf("%f", &largura);
    
    float area = altura*largura;

    printf("A área do retângulo é %2.f", area);

    return 0;

}