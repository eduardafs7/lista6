#include <stdio.h>
#include <string.h>

int main() {
    char texto[201];
    int i, tamanho_manual = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    int tamanho_strlen = strlen(texto);

    for (i = 0; texto[i] != '\0'; i++) {
        tamanho_manual++;
    }

    printf("Tamanho usando strlen: %d\n", tamanho_strlen);
    printf("Tamanho calculado manualmente: %d\n", tamanho_manual);

    if (tamanho_strlen == tamanho_manual)
        printf("Os dois tamanhos sao iguais.\n");
    else
        printf("Os tamanhos sao diferentes.\n");

    return 0;
}
