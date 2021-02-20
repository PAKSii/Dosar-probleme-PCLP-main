//Să se scrie o funcție C care să determine prima și ultima cifră a unui număr natural transmis ca parametru. Funcția va întoarce rezultatele prin intermediul unor parametri de ieşire.
#include <stdio.h>
void detcifre(int n,int p,int u)
{
    u=n%10;
    while(n>9)
    n/=10;
    p=n%10;
}
int main()
{
  int n,p,u;
  scanf("%d%d%d",&n,&p,&u);
  detcifre(n,p,u);
  printf("%d %d %d",n,p,u);
  return 0;
}
