/*Faça um programa que leia uma frase e a imprima na tela 
substituindo todas as letras maiúsculas por minúsculas.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i, t;
    char texto[100];

    printf("Digite uma frase com minusculas e maiusculas:");
    fgets(texto, 100,stdin);

    t = strlen(texto);      //identifica tamanho

    for ( i = 0; i < t ; i++)
    {
        if(isupper(texto[i]) != 0)  // verifica se o caracter do respectivo indice é maiuscula 
        {
            texto[i] = tolower(texto[i]); //transforma em minuscula
        }
    }
    printf("%s",texto);     //imprime texto
    
}