//Să se scrie un program care să afişeze prefixele şi sufixele unui cuvânt citit.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[11],copie[11];
    int i,n;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        printf("%s\n",copie)
        copie[n-i-1]="\0";
    }
    for(i=0;i<n;i++)
    {
        puts(s);
        strcpy(s,s+1);
    }
    return 0;
}
