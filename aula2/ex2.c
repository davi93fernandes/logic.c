/*2) Leia uma string e imprima somente uma quantidade de caracteres informada pelo usuário.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char texto[100];
    int qt;

    printf("\nDgite um texto: \n");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';
    
    printf("\nDgite a quantidade a ser impressa: \n");
    scanf("%d",&qt);

    
    printf("%.*s",qt,texto);
}