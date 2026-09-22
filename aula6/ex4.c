/*EXERCÍCIO 4 
Faça uma função que lê uma string e conta quantas vezes dois caracteres informados 
pelo usuário são encontrados juntos. 

Por exemplo para a string: 

Oportunidade para atuar como bolsista de extensao.

Caracteres informados pelo usuário:
t u

Quantidade de vezes: 2*/

#include<stdio.h>
#include<string.h>

int compChar(){
    
    char str[200],carac1,carac2;
    int cont=0,i,tam;
        
        // informa e solicita informações ao usuário
  
    printf("Verificar quantas ocorrencias 2 caracteres aparecem juntos em um texto.\n");
    printf("Digite uma frase: \n");
    fgets(str,200,stdin);

    printf("Digite o 1º caractere a ser encontrado:");
    scanf(" %c",&carac1);
    
    printf("Digite o 2º caractere a ser encontrado:");
    scanf(" %c",&carac2);

        // verifica o tamanho do texto digitado
    tam = strlen(str); 

        //Percorre string e verifica o conteudo do indice e o conteudo do indice +1 o sucessor, caso verdadeiro soma incrementa o cont
    for ( i = 0; i < tam - 1; i++)
    {
        if (carac1 == str[i] && carac2 == str[i +1])
        {
            cont++;
        }   
    }
    return cont;
}

int main()
{
    
    printf("Ocorrencias: %i",compChar());
}
