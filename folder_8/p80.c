//Să se scrie un program care citește un șir de caractere în care cuvintele sunt formate numai din litere mici ale alfabetului englez și sunt separate prin câte un spațiu și elimină litera din mijloc a fiecărui cuvânt cu număr impar de litere (cel puțin trei).
#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],*p,cuv[15];
    gets(s);
    int n,ok=0;
    p=strtok(s," ");
    while(p)
    {
        strcpy(cuv,p);
        if(strlen(cuv)%2==1)
        {
            ok=1;
            n=strlen(cuv);
            strcpy(cuv+n/2,cuv+n/2+1);
            printf("%s ",cuv);

        }
        else
            printf("%s ",cuv);
            p=strtok(NULL," ");

    }
    if(!ok)
        printf("nu exista");
    return 0;
}
