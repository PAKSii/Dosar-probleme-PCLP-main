//Scrieți definiția completă unui subprogram C recursiv care returnează suma elementelor divizibile cu 3 ale unui tablou unidimensional transmis ca parametru.
#include <stdio.h>
int sum3(int v[101],int n)
{
    if(n-1==0)
        if(v[n-1]%3==0)
            return v[n-1];
        else
            return 0;
    else
        if(v[n-1]%3==0)
            return v[n-1]+sum3(v,n-1);
        else
            return sum3(v,n-1);
}
int main()
{
  int v[101],n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&v[i]);
    for(int i=1;i<=n;i++)
      printf(sum3(v[i],n));
  return 0;
}
