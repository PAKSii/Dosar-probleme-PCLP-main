//Să se scrie un program care citeşte de la tastatură o propoziţie formată din mai multe cuvinte separate prin spaţii şi transformă prima şi ultima literă a fiecărui cuvânt în literă mare.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[256],*p,cuv[256],sep[]=" ";
    gets(s);
    int x;
    x=strlen(cuv);
    p=strtok(s,sep);
    while(p)
    {
        strcpy(cuv,p);
        for(int i=0;i<strlen(cuv);i++)
        {
            cuv[0]=toupper(cuv[0]);
            cuv[x+i]=toupper(cuv[x+i]);

        }
        p=strtok(NULL,sep);

s==strcpy(s,cuv);
    }
puts(s);
    return 0;
}
