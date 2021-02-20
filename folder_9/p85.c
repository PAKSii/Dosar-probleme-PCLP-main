/*
Se consideră un cuvânt format din cel puțin două și cel mult 100 de caractere, numai litere mici ale alfabetului englez.
Scrieţi un program care citeşte de la tastatură un cuvânt de tipul precizat și afișează pe ecran mesajul DA în cazul în care cuvântul conține doar consoane şi, eventual, vocala i, sau mesajul NU în caz contrar.
*/
#include <stdio.h>
#include <string.h>
int main()
{
   char sir[100],voc[]="aeiou",litera[]="a";
   int i;
  gets(s);
    for(i=0;i<strlen(sir);i++)
        {
        if(strchr(voc,sir[i]))
        printf("nu");
    else
        printf("da");
        if(strchr(litera,sir[i]))
                printf("da");
        break;
        }
        return 0;
}
