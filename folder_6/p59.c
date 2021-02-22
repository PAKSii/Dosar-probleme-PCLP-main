//Se dau 2 șiruri de caractere. Sa se afișeze toate caracterele primului șir ce se găsesc și în al doilea.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[251],s2[251];
  scanf("%s",s1);
  scanf("%s",s2);
    for(int i=0;i<strlen(s1);i++)
    {
        int ok=0;
        if(strchr(s2,s1[i]))
            ok=1;
        if(ok)
            printf("%c",s1[i]);
    }
    return 0;
}
