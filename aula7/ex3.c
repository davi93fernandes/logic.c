/*Faça um programa que leia duas frases e gere uma terceira 
que representa a combinação das duas frases recebidas, mesclando os seus caracteres.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,ta1,ta2;
    char txt1[100],txt2[100],txt3[100];

//capta primeira frase
    printf("Digite um texto: ");  
    fgets(txt1, 100, stdin);
       
//retira \n da string e coloca o terminador \0
    txt1[strcspn(txt1, "\n")] = '\0';
      
//capta a segunda string
    printf("Digite outro texto: ");
    fgets(txt2, 100, stdin);

//retira \n da string e coloca o terminador \0
    txt2[strcspn(txt2, "\n")] = '\0';

//verifica os tamanhos
    ta1 = strlen(txt1);
    ta2 = strlen(txt2);

k = 0;  // inicializa controlador da nova string 

    for( i = 0; i < ta1 || i < ta2; i++)    // verifica se os tamanhos das strings de forma independente
    {
        //se houver caracteres na primeira string
       if (i < ta1)
       {
            txt3[k] = txt1[i];          //atribui caractere da primeira string ao indice k da nova string
            k++;                        //incrementa controladora da nova string;
       }
       //se houver caracteres na segunda string
       if (i < ta2)
       {
            txt3[k] = txt2[i];          //atribui caractere da primeira string ao indice k da nova string considerando o if anterior ou nao.
            k++;                        //incrementa controladora da nova string;
       }
       
       
    }
    txt3[k] = '\0';
    
    printf("%s",txt3);    

}
