/*EXERCÍCIO 1 
Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!! */

/*#include <stdio.h>

void imprimirExclamacoes(int n)
{
    int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("!");
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    imprimirExclamacoes(n);

    return 0;
}*/
#include<stdio.h>

void funcaoImprime(int linhas);

int main(){
    int qLinha;
    printf("Digite um valor para quantidade linhas: ");
    scanf("%i",&qLinha);
    funcaoImprime(qLinha);
    return 0;
} 

void funcaoImprime(int linhas){
    int i,j;
    for(i=1;i<linhas;i++){
        for(j=1;j<=i;j++){  
            printf("!");
        }
        printf("\n");
    }
}
