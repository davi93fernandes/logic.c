/*Construa uma função que diga se um dado número N inteiro, 
recebido através do teclado, é PAR ou ÍMPAR.*/

#include<stdio.h>

void verifica(int n)
{
    if (n % 2 == 0 )
    {
        printf("\nE par!\n");
    }
    else
    {
        printf("\nE impar!\n");
    }
    
}

int main()
{
    int n;
    printf("\nDigite um numero: \n");
    scanf("%i",&n);

    verifica(n);

    return 0;
}