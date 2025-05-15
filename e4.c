#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[201], limpo[201];
    int i, j = 0;
    int e_palindromo = 1;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    if (strchr(texto, '\n')) {
        texto[strcspn(texto, "\n")] = '\0';
    }

    for (i = 0; texto[i] != '\0'; i++) {
        if (isalnum((unsigned char)texto[i])) {
            limpo[j++] = tolower((unsigned char)texto[i]);
        }
    }
    limpo[j] = '\0';

    int inicio = 0, fim = j - 1;
    while (inicio < fim) {
        if (limpo[inicio] != limpo[fim]) {
            e_palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (e_palindromo)
        printf("E palindromo.\n");
    else
        printf("Nao e palindromo.\n");

    return 0;
}
