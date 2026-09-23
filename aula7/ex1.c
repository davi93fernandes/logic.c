/*Faça um programa que leia uma frase e gere uma segunda frase inserindo um * no lugar dos espaços em branco. 
Imprima as duas na tela.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i;
    char texto[100],texto2[100];
    
//capta texto
    printf("Digite um texto:\n");
    fgets(texto, 100, stdin);

//retira \n da string
    texto[strcspn(texto, "\n")] = '\0';

    for ( i = 0; i < strlen(texto); i++)
    {
        texto2[i] = texto[i];           //cria no texto
       if(isspace(texto[i]) != 0 )      //verifica se o indice de texto é um espaco em braco, retorna diferende de 0 para positivo
       {
        texto2[i] = '*';                //coloca o * no lugar do indice com espaco no novo texto 
       }   
    }
    texto2[i] = '\0';                   // coloca caractere terminador no final do novo texto
    printf("\n%s\n%s\n",texto,texto2);  // imprime as duas frases
    
}
