#include <stdio.h>
#include <string.h>

int main() {
    char texto[201];
    int i;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    int tamanho = strlen(texto);

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    printf("\n");
    return 0;
}
