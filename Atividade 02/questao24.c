#include <stdio.h>
#include <math.h>

int main(){
    int clima;
    float tempc;
    printf("Como está o clima? (1 - ensolarado, 2 - nublado, 3 - chuvoso) ");
    scanf("%d", &clima);
    printf("Qual a temperatura em Celsius? ");
    scanf("%f", &tempc);
    switch (clima) {
        case 1:
        if (tempc > 25) {
            printf("Sugestão de atividades: ir a praia; fazer um piquenique.");
        } else {
            if (tempc >= 15 && tempc <= 25) {
                printf("Sugestão de atividades: caminhada; passeio de bicicleta.");
            } else {
                if (tempc < 15) {
                    printf("Sugestão de atividades: fotografia da natureza; observação de pássaros.");
                }
            }
        }
        break;
        
        case 2:
        if (tempc > 20) {
            printf("Sugestão de atividades: visita ao museu; compras em centros comerciais ao ar livre.");
        } else {
            if (tempc >= 10 && tempc <= 20) {
                printf("Sugestão de atividades: passeios culturais em galerias ou teatros");
            } else {
                if (tempc < 10) {
                    printf("Sugestão de atividades: leitura em bibliotecas; visita ao cinema.");
                }
            }
        }
        break;
        
        case 3:
        if (tempc > 15) {
            printf("Sugestão de atividades: visita ao spa; aulas de culinária.");
        } else {
            if (tempc >= 5 && tempc <= 15) {
                printf("Sugestão de atividades: visite museus ciência; participe de sessões de boliche");
            } else {
                if (tempc < 5) {
                    printf("Sugestão de atividades: tarde de jogos em casa; maratona de filmes.");
                }
            }
        }
        break;
        
    }
    return 0;
}
