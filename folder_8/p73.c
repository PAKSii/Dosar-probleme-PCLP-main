/*
Limba păsărească este foarte simplă; și asemănătoare cu limba română! Un text scris în română se traduce în păsărește astfel: după fiecare vocală se inserează litera p și vocala respectivă.
Se dă o propoziție scrisă în limba română. Să se traducă în păsărească.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[256],t[256],voc[]="aeiou";
    gets(s);
    for(int i=0;i<strlen(s);i++)
        if(strchr(voc,s[i]))
            printf("%c, p ,%c",s[i],s[i]);
            else
            printf("%c",s[i]);
    return 0;
}
