//Să se verifice dacă un cuvânt dat este palindrom.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[101],cop[101];
  int ok=0;
  gets(s);
  strcpy(cop,s);
  strrev(cop);
  for(int i=0;s[i];i++)
    if(cop[i]!=s[i])
      ok=1;
  if(ok==1)
    printf("!palindrom");
  else
    printf("palindrom");

}
