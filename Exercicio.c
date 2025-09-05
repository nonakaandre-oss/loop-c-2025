#include <stdio.h>

int main() {
    int número;

    do {
        printf("Digite um número inteiro positivo:");

        scanf("%d", &número);

        printf("Número digitado: %d\n", número);

            if(número % 2 == 0) {
                printf("Número Par\n");
            } else {
                printf("Número ímpar\n");
        }
        }while (número > 0);
    

    return 0;
}