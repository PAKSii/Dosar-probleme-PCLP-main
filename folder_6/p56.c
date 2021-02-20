//Se dă un șir de caractere. Să se determine câte vocale din șir sunt cuprinse între două consoane.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[256],voc[]="aeiou",cons[]="qwrtypsdfghjklzxcvbnm";
    scanf("%s",s);
    int nr=0;
    for(int i=1;i<strlen(s)-1;i++)
        if(strchr(cons,s[i-1])&&strchr(voc,s[i])&&strchr(cons,s[i+1]))
        nr++;
    printf("%d",nr);
    return 0;
}
