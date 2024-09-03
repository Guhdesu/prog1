#include <stdio.h>

int main() {
	int tipo, altura;
	
	printf("Qual tipo de triângulo você quer fazer?\n1 - Preenchido\n2 - Vazado\n");
	scanf("%d", &tipo);
	printf("Informe a altura do triângulo: ");
	scanf("%d", &altura);
	switch(tipo){
	    case 1:
	    for (int i = 1; i <= altura; i++) {
	        for (int j = 1; j <= i; j++) {
	            printf("*");
	        }
	        printf("\n");
	    }
	    
	    break;
	    
	    case 2:
	    for (int i = 1; i <= altura; i++) {
	        for (int j = 1; j <= i; j++) {
	            if (i == 1 || i == altura) {
	                printf("*");
	            } else {
	            if (j == 1 || j == i) {
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
