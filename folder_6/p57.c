//Să se scrie un program care citeşte un şir de caractere format din litere mici ale alfabetului englez şi elimină din șir toate vocalele.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[21],voc[]="aeiou",cuv[21];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
           if(strchr(voc,s[i]))
           {strcpy(s+i,s+i+1);

           i--;
       }
    printf("%s",s);
          return 0;
}
