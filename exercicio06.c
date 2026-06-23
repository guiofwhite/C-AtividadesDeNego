// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 06

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        printf("Existem valores repetidos. \n");
    }

    int maior = num1;

    if (num2 > maior)
    {
        maior = num2;
    }
    if (num3 > maior)
    {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
