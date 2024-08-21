#include <stdio.h>

int main() {
    int horario, trafego;
    int tempoverde, tempoamarelo, tempovermelho;

    printf("Digite o horário do dia (1 = manhã, 2 = tarde, 3 = noite): ");
    scanf("%d", &horario);

    printf("Digite o nível de tráfego (1 = baixo, 2 = médio, 3 = alto): ");
    scanf("%d", &trafego);

    switch (horario) {
        case 1: // Manhã
            printf("Manhã: ");
            break;
        case 2: // Tarde
            printf("Tarde: ");
            break;
        case 3: // Noite
            printf("Noite: ");
            break;
        default:
            printf("Horário inválido.\n");
            return 1;
    }

    if (trafego == 1) { 
        tempoverde = 60;    
        tempoamarelo = 5;   
        tempovermelho = 30; 
    } else if (trafego == 2) { 
        tempoverde = 45;    
        tempoamarelo = 5;   
        tempovermelho = 45; 
    } else if (trafego == 3) { 
        tempoverde = 30;    
        tempoamarelo = 5;   
        tempovermelho = 60; 
    } else {
        printf("Nível de tráfego inválido.\n");
        return 1;
    }

    printf("Tempo verde: %d segundos\n", tempoverde);
    printf("Tempo amarelo: %d segundos\n", tempoamarelo);
    printf("Tempo vermelho: %d segundos\n", tempovermelho);

    return 0;
}
