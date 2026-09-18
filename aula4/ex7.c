/*7) Crie uma função que leia números inteiros até que o usuário digite 0. Ao final, informe:
 quantidade de números positivos;
 quantidade de números negativos.*/

#include<stdio.h>

void contNeP()
{
    int num, contP=0,contN=0,i;
    
    printf("\nDigite um numero para somar ou 0 para sair.\n");
    scanf("%i",&num);

    while(num != 0)
    {
        if(num > 0)
        {
            contP++;
        }
        if (num < 0 )
        {
            contN++;
        }
        printf("\nDigite um numero para somar ou 0 para sair.\n");
        scanf("%i",&num);
    }
    printf("\n__________________________________________");
    printf("\nSoma dos numeros positivos eh: %i\n",contP);
    printf("\nSoma dos numeros negativos eh: %i\n",contN);
}

int main()
{

    contNeP();    
}