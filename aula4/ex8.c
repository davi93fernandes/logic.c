/*Crie uma função que leia números inteiros até que o usuário digite 0. 
A função deverá retornar o maior número digitado.
*/

#include<stdio.h>

int funcMaior()
{
    int num,maior;

    printf("\nDigite um numero para saber o maior ou zero para sair: \n");
    scanf("%i",&num);
    maior =num;
    while ( num != 0 )
    {
        if (num > maior)
        {
            maior = num;
        }
        printf("\nDigite um numero para saber o maior ou zero para sair: \n");
        scanf("%i",&num);
    }
    return maior;
}



int main()
{
    printf("Maior numero eh %i\n", funcMaior());
}