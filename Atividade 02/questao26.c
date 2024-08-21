#include <stdio.h>

int main() {
    int tipo, assentos;
    int capacidade;
    int disponiveis;

    int concerto = 500;
    int teatro = 200;
    int esporte = 1000;
    int conferencia = 300;

    int assentos_concerto = concerto;
    int assentos_teatro = teatro;
    int assentos_esporte = esporte;
    int assentos_conferencia = conferencia;

    printf("Escolha o tipo de evento:\n");
    printf("1 - Concerto\n");
    printf("2 - Teatro\n");
    printf("3 - Evento Esportivo\n");
    printf("4 - Conferência\n");
    printf("Digite o número do evento: ");
    scanf("%d", &tipo);

    printf("Digite a quantidade de assentos desejada: ");
    scanf("%d", &assentos);

    switch (tipo) {
        case 1:
            capacidade = concerto;
            disponiveis = assentos_concerto;
            break;
        case 2:
            capacidade = teatro;
            disponiveis = assentos_teatro;
            break;
        case 3:
            capacidade = esporte;
            disponiveis = assentos_esporte;
            break;
        case 4:
            capacidade = conferencia;
            disponiveis = assentos_conferencia;
            break;
        default:
            printf("Tipo de evento inválido.\n");
            return 1;
    }

    if (assentos <= disponiveis) {
        printf("Reserva confirmada! %d assentos reservados.\n", assentos);

        switch (tipo) {
            case 1:
                assentos_concerto -= assentos;
                break;
            case 2:
                assentos_teatro -= assentos;
                break;
            case 3:
                assentos_esporte -= assentos;
                break;
            case 4:
                assentos_conferencia -= assentos;
                break;
        }
    } else {
        printf("Não há assentos suficientes disponíveis.");
    }

    return 0;
}
