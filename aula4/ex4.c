/*4) Crie uma função somaPares(int n) que calcule e retorne a soma de todos os números pares entre 1 e N.*/

#include<stdio.h>

int somaPares(int n);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("soma numero pares ate %i eh %i.\n",num,somaPares(num));

}

int somaPares(int n)
{
    int soma=0,i;

    for ( i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}