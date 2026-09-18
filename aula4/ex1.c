/*Crie uma função somaN(int n) que receba um número inteiro N e retorne a soma dos números de 1 até N.*/
#include<stdio.h>

int somaN(int n);

int main()
{
    int num;
    printf("Digite um número: \n");
    scanf("%i",&num);
    printf("Soma dos numeros: %i\n",somaN(num));
}

int somaN(int n)
{
    int i,soma=0;
    for ( i = 1; i <= n; i++)
    {
        soma = soma + i;
    }
    return soma;
}

