#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char letra = (rand() % 26) + 'a';
    char chute;
    int tentativas = 0;

    printf("Tente adivinhar a letra secreta (de 'a' a 'z')\n");

    do {
        printf("Digite o seu chute: ");
        scanf(" %c", &chute);
        tentativas++;

        if (chute < letra) {
            printf("Dica: A letra  vem depois no alfabeto.\n\n");
        } else if (chute > letra) {
            printf("Dica: A letra  vem antes no alfabeto.\n");
        } else {
            printf("Parabéns! Você acertou a letra '%c'!\n tentativas %d: ", letra,tentativas);
        }
    } while (chute != letra);

    return 0;
}