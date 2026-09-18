/*6) Crie uma função que leia vários números utilizando while. A leitura deve continuar até que o usuário digite 0. Ao
final, apresente a soma dos números digitados.*/

#include<stdio.h>

int lerNum()
{
    int num,soma = 0;
    printf("\nDigite numero para somar ou 0 para sair:\n");
    scanf("%i",&num);
   
    while (num != 0)
    {
        soma = soma + num;

        printf("\nDigite numero para somar ou 0 para sair:\n");
        scanf("%i",&num);
    }
    
    return soma;
    
}

int main()
{
   printf("Soma total: %i\n", lerNum());
}