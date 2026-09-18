/*5) Crie uma função para o cálculo da potencia utilizando for. Não utilize a função pow() da biblioteca matemática.*/

#include<stdio.h>

int potencia(int b, int e);

int main()
{
    int numB,numP;
    printf("Digite numero para base da potencia: ");
    scanf("%i",&numB);
    printf("Digite numero para o expoente da potencia: ");
    scanf("%i",&numP);
    printf("%i",potencia(numB,numP));
}

int potencia(int b, int e)
{
    int i,res = 1;

    for ( i = 1; i <= e; i++)
    {
       res = res * b;
        
    }
    return res;
}