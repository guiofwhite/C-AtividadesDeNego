// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 07

#include <stdio.h>

int main(){
    int temperatura;
    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura >= 30){
        printf("Está muito quente.\n");
    } else if (temperatura <=29 && temperatura >15){ 
        printf("Está agradável.\n");
    } else if (temperatura >= 15){
        printf("Está frio.\n");
    } else {
        printf("Está muito frio.\n");
    }
    
    return 0;
}