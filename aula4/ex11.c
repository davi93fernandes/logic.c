/*Jogo de adivinhação. Crie um jogo em que o computador possua um número secreto entre 1 e 100. 
O usuário deverá tentar descobrir o número. A cada tentativa, o programa deverá informar: 
“Tente um número maior!” ou “Tente um número menor!”. 
O jogo deve continuar utilizando while até que o usuário acerte. Ao final, informe a quantidade de tentativas.*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int play()
{
    int advin;
    printf("\n________________________________");
    printf("\n\nAdvinhe um numero de 1 a 100!\n-1 para sair.\n\n");
    scanf("%i",&advin);
    return advin;
}

void research(int n, int advin)
{    
    if (n == advin)
    {
        printf("\nParabens, voce acertou!\n");
    }else if (n > advin)
    {
        printf("\nDigite um numero maior!\n");
    }else
    {
        printf("\nDigite um numero menor\n");
    }  
}

int main()
{
    srand(time(NULL));

    int n = rand() % 100 +1;
    int advin = 0,cont=0;

    while (advin != n && advin != -1)
    {
        advin = play();
        research(n, advin);
        cont++;
    }
    printf("\n________________________________\n");
    printf("\nVoce tentou %i vezes", cont);
    printf("\n________________________________\n");
}