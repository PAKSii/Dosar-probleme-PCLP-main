// Rezolvarea problemei : Scrieți un algoritm care determină, pornind de la cifra P, cel de-al K-lea termen al sirului S.
#include <stdio.h>
void main()
{
  int a,b,c,d,e,i,ct=0;
  scanf("%d%d",&a,&b);
  d=a+10;
  e=a+30;
  printf("%d ",a);
  for(i=1;i<=b/2;i++)
    {
      ct+=2;
      d+=30;
      e+=30;
      if(ct==b)
        printf("%d ", d-30);
    }
}
