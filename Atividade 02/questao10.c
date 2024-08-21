#include <stdio.h>

int main(){
    float speed;
    printf("Insira a velocidade do veículo em Km/h: ");
    scanf("%f", &speed);
    
    if (speed < 30) {
        printf("O veículo está em velocidade baixa.");
    } else if (speed >= 30 && speed <= 60) {
        printf("O veículo está em velocidade média.");
    } else {
        printf("O veículo está em velocidade alta.");
    }

    return 0;
}
