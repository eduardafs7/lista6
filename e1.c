#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[101];
    int i, tem_maiuscula = 0, tem_minuscula = 0, tem_numero = 0;

    printf("Digite a senha: ");
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = '\0';

    int tamanho = strlen(senha);

    if (tamanho < 8 || tamanho > 100) {
        printf("Senha invalida.\n");
        return 1;
    }

    for (i = 0; senha[i]; i++) {
        if (isupper(senha[i])) tem_maiuscula = 1;
        else if (islower(senha[i])) tem_minuscula = 1;
        else if (isdigit(senha[i])) tem_numero = 1;
    }

    if (tem_maiuscula && tem_minuscula && tem_numero)
        printf("Senha valida.\n");
    else
        printf("Senha invalida.\n");

    return 0;
}
