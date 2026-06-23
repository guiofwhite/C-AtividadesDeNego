// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 04

#include <stdio.h>

int main() {
    float valor;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor <= 100.00) {
        printf("Sem desconto\n");
    } 
    else if (valor <= 500.00) {
        float desconto10 = valor * 0.10;
        printf("Desconto de 10%% aplicado. Valor final: R$ %.2f\n", valor - desconto10);
    } 
    else {
        float desconto20 = valor * 0.20;
        printf("Desconto de 20%% aplicado. Valor final: R$ %.2f\n", valor - desconto20);
    }

    return 0;
}
