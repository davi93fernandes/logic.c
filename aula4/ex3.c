/*3) Crie uma função contarPares(int n) que conte quantos números pares existem entre 1 e N.*/

#include<stdio.h>

int contarPares(int n);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    printf("Ha %i pares de 1 ate %i.",contarPares(num),num);
}

int contarPares(int n)
{
    int i, cont=0;

    for ( i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            cont++;
        }
    }
    return cont;
}