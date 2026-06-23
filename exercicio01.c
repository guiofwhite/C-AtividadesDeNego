// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 01

#include <stdio.h>

int main(){
    int idade;
    float nota;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 1 && idade <12){
        printf("Criança. \n");
    } else if (idade >=12 && idade <18){
        printf("Adolescente. \n");
    } else if (idade >=18 && idade <60){
        printf("Adulto. \n");
    }else{
        printf("Idoso. ");
    }
    return 0;
}