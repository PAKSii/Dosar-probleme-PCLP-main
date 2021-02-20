//Să se scrie un program care citește un cuvânt și îl afișează după interschimbarea primei vocale cu ultima consoană.
#include <stdio.h>
#include <string.h>
int main()
{
   char sir[10],voc[]="aeiouAEIOU";
   int aux,i,j;
   aux=0;
   gets(s);
   for(i=0;i<strlen(sir);i++)
    for(j=strlen(sir);j>0;j--)
    {if(strchr(voc,sir[i])&&!strchr(voc,sir[j]))

    aux=sir[i];
    sir[i]=sir[j];
    sir[j]=aux;

    break;

}
printf("%c %c ",s[i],s[j]);
        return 0;
}
