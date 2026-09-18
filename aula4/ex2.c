/*2) Crie uma função tabuada(int n)que receba um número e mostre sua tabuada de 1 a 10 
utilizando um for.*/

#include<stdio.h>

void tabuada(int n);

int main()
{
    int num;
    printf("Digite numero: ");
    scanf("%i",&num);
    tabuada(num);
    
}

void tabuada(int n)
{
    int i,res;
    printf("Tabuada do %i \n", n);
    for ( i = 1; i <= 10; i++)
    {
        res = i * n;
        printf("%i * %i = %i\n", i,n,res);
    }    
}