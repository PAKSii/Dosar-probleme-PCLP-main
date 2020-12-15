// Rezolvarea problemei : Scrieți un program care determină câte sticle de x litri cu apă trebuie deschise pentru a umple un vas de y litri.
#include <stdio.h>
void main()
{
  int x,y,n;
  scanf("%d%d",&x,&y);
  n=1;
  if(n*x==y)
    printf("Trebuie deschisa %d sticla",n);
  if(n*x>y)
    printf("Trebuie deschisa %d sticla",n);
  while(x<y)
  {
    if(n*x==y || n*x>y)
      {
        printf("Trebuie deschise %d sticle",n);
        break;
      }
      else
    n++;
  }
}
