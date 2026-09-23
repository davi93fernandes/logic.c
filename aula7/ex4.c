/*Faça um programa que leia uma frase e, a partir dela, gere duas novas strings, 
uma contendo somente as letras e outra contendo todos os outros tipos de caracteres inseridos. 
Crie uma função para a leitura da frase e outra para a geração das duas novas strings. 
A impressão das três strings na tela deverá ser feita a partir da função main, através da chamada de uma função para impressão. 
A função para impressão deverá receber somente uma string como parâmetro e poderá ser usada quantas vezes forem necessárias.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
        
        // prototipos
void leFrase(char txt[]);
void geraString(char txt[],char letras[], char outros[]);
void impressao(char txt[]);

int main()
{   

        //declaracao das variaveis
    char txt[100];
    char letras[100];
    char outros [100];

    leFrase(txt); //execucao da funcao com string com parametro
    
    geraString(txt,letras,outros);  //execucao da funcao com string com parametro

    impressao(txt);     //execucao da funcao com string com parametro
    impressao(letras);  //execucao da funcao com string com parametro
    impressao(outros);  //execucao da funcao com string com parametro

}

void leFrase(char txt[])
{

        //Leitura da string
    printf("Digite trase: \n");
    fgets(txt, 100, stdin);
    txt[strcspn(txt, "\n")] = '\0';     //garantia de terminador da string = '\0' e nao \n
}

void geraString(char txt[],char letras[], char outros[])  // funcao recebe a string a ser alterada e as que serao criadas.
{
        //declaracao e inicializacao de variaveis
    int i,k,j, tam = strlen(txt);
    k = 0;
    j = 0;
    

    for ( i = 0; i < tam; i++)
    {
        if (isalpha(txt[i]) != 0 ) // verifica se o caracter do indice é = 0
        {
            letras[k] = txt[i];     //distribui conforme condicao, se é igual letra.
            k++;                    //incrementa controlador
        }
        else
        {
            if(txt[i] != ' ')
            {
                outros[j] = txt[i];         //distribui conforme condicao, se é diferente de letra.
                j++;                            //incrementa controlador
            }
        }
    }

        //finaliza strings criadas
    letras[k] = '\0';
    outros[j] = '\0';
}

void impressao(char txt[])
{
    printf("\n%s\n",txt);   // imprime string
}
