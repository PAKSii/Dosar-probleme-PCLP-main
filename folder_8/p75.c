//Se dă un șir de caractere reprezentând o propoziție formată din litere mici ale alfabetului englez și spații. Determinați numărul de perechi de vocale consecutive din propoziție.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[256],voc[]="aeiou";
    int ct=0;
    gets(s);
    for(int i=0;i<strlen(s)-1;i++)
        if(strchr(voc,s[i])&&strchr(voc,s[i+1]))
            ct++;
    printf("%d",ct);
    return 0;
}
