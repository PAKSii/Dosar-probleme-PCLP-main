//Se dă o propoziție care conține numai litere mici ale alfabetului englez și spații. Să se afișeze cuvintele din propoziție care conțin numai vocale.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[256],voc[]="aeiou",*p,sep[]=" ",cuv[15];
    gets(s);
    p=strtok(s,sep);
    while(p)
    {
        int ok=1;
        strcpy(cuv,p);
        for(int i=0;i<strlen(cuv);i++)
            if(!strchr(voc,cuv[i]))
                ok=0;
        if(ok)
            printf("%s",cuv);
        p=strtok(NULL," ");
        }
    return 0;
}
