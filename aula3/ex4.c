/*Faça um programa para determinar se um dado número N, 
recebido através do teclado, é POSITIVO, NEGATIVO
ou NULO. 
Crie uma função que recebe o número como parâmetro e imprime o resultado.*/

#include<stdio.h>


void imprime(int n)
{
    if (n > 0)
    {
        printf("\nO numero %d eh POSITIVO\n",n);
    }
    else if (n < 0)
    {
        printf("\nO numero %d eh NEGATIVO\n",n);
    }
    else
    {
        printf("\nO numero %d eh NULO\n",n);

    }
}

int main()
{
    int num;

    printf("\nDigite um numero: \n");
    scanf("%d",&num);
    
    imprime(num);
    
    return 0;
}