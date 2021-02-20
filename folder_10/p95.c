//Scrieți definiția completă unui subprogram C care returnează suma celor mai mici m elemente ale unui tablou unidimensional dat.
#include <stdio.h>
int suma(int v[100], int n, int m)
{
    int sum=v[0];
    for(int i=0;i<n;i++)
        if(v[i]<m)
    n++;
    sum+=n;
 return sum;
}
int main()
{
  int v[100],n,m;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%d",&v[i]);
  printf(suma(v,n,m));
  return 0;
}
