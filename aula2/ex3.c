/* Leia uma palavra e mostre-a: em letras maiúsculas;  em letras minúsculas.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char word[30],wordUpper[30],wordLower[30];
    int i,t;

    printf("Digite uma palavra\n");
    scanf("%s",word);

    t = strlen(word);
    for ( i = 0; i < t; i++)
    {
        wordUpper[i] = toupper(word[i]);   
    }
    wordUpper[i] = '\0';

    for ( i = 0; i < t; i++)
    {
        wordLower[i] = tolower(word[i]);
    }
    wordLower[i] = '\0';

    printf("%s\n\n",wordUpper);
    printf("%s\n",wordLower);

    
}