#include <stdio.h>

int main() {
	int tipo, altura;
	
	printf("Qual tipo de retângulo você quer fazer?\n1 - Preenchido\n2 - Vazado\n");
	scanf("%d", &tipo);
	printf("Informe a altura do triângulo: ");
	scanf("%d", &altura);
	switch(tipo){
	    case 1:
	    for (int i = 1; i <= altura; i++) {
	        for (int j = 1; j <= 8; j++) {
	            printf("*");
	        }
	        printf("\n");
	    }
	    
	    case 2:
	    for (int i = 1; i <= altura; i++) {
	        for (int j = 1; j <= 8; j++) {
	            
	            if (i == 1 || i == altura) {
	                printf("*");
	            } else {
	            if (j == 1 || j == 8) {
	                printf("*");
	            } else {
	            printf(" ");
	            }
	           }
	        }
	        printf("\n");
	    }
	    
	}

	return 0;
}
