/*9) Crie uma função: int fatorial(int n); que calcule o fatorial de n utilizando um for. 
Depois, faça uma segunda versão utilizando while. Exemplo: 5! = 120*/
#include<stdio.h>


int fatorial(int n)
{
    int i,fat=1;
    
    for ( i = n; i >= 1; i--)
    {
        fat = fat * i;
    }
    return fat; 
}

int fatWhile(int n)
{
    int i=n,fat=1;
    

    while (i >= 1)
    {
        fat = fat * i;
        i--;
    }
    return fat;
}

int main()
{
    int n;
    printf("\nDigite um numero para obter o fatorial: \n");
    scanf("%d",&n);
    printf("%i\n",fatorial(n));
    printf("%i\n",fatWhile(n));
    
}
