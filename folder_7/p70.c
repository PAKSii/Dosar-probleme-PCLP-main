//Scrieți definiția completă unui subprogram C recursiv care returnează suma elementelor unui tablou unidimensional transmis ca parametru.
#include <stdio.h>
int suma(int v[101],int n)
{
    if(n-1==0)
            return v[n-1];
    else
            return v[n-1]+suma(v,n-1);
}
int main()
{
  int v[101],n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&v[i]);
    for(int i=1;i<=n;i++)
      printf(suma(v[i],n));
      return 0;
}
