//Se dă un şir format din cel mult 100 de caractere – litere mici ale alfabetului englez şi spaţii. Să se modifice acest şir prin dublarea fiecărei vocale.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],*p,voc[]="aeiou";
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr(voc,s[i]))
            {strcpy(s+i+1,s+i);
            i++;
            }
        break;
    }
    puts(s);
    return 0;
}
