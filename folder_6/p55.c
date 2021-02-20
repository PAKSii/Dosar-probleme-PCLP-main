//Să se scrie un program care citeşte un şir de caractere format din litere mici ale alfabetului englez şi înlocuieşte fiecare vocală cu litera mare corespunzătoare.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[21],voc[]="aeiou";
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
        if(strchr(voc,s[i]))
            s[i]=toupper(s[i]);
    printf("%s",s);
    return 0;
}
