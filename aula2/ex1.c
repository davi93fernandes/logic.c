/*1)     Escreva um programa que leia uma string e exiba: a quantidade de caracteres;  
o primeiro caractere; o último caractere.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char texto[100];
    char prim,ulti;
    int qt;

    printf("Digite uma string\n");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    qt = strlen(texto);
    prim = texto[0];
    ulti = texto[qt-1];

    printf("\nQuantidade de caracteres: %d",qt);
    printf("\nPrimeiro caractere: %c",prim);
    printf("\nUltimo caractere: %c\n",ulti);
}