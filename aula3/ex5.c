/*Faça uma função que leia um número e imprima a raiz quadrada do número, 
caso ele seja positivo ou igual a zero; e o quadrado do número, caso ele seja negativo.
*/
#include<stdio.h>
#include<math.h>

void imprime()
{
    double n,rq,q;
    printf("\nDigite um numero: ");
    scanf("%lf",&n);

    if (n >= 0)
    {
        rq = sqrt(n);
        printf("Resultado eh: %.2f", rq);
    }
    else
    {
        q = n * n;
        printf("\nResultado eh %.2f", q);
    }
}

int main()
{

    imprime();
    return 0;
}