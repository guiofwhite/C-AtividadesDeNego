// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 11


#include <stdio.h>

int main() {
    int num1, num2, opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nEscolha a operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOpcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Resultado: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
