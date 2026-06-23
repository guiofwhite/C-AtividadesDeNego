// Nome: Guilherme Marinho da Silva
// Turma: 3º Técnico em Desenvolvimento de Sistemas
// Exercício 09

#include <stdio.h>

int main(){
    int idade;

    printf("informe sua idade: ");
    scanf("%d", &idade);

    if(idade <=15){
        printf("Entreda negada. \n");
    } else if (idade >=16 && idade <=17){
        printf("Permitido com responsável. \n");
    } else{
        printf("Entrada permitida. \n");
    }
    return 0;
}