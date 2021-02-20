//Scrieți definiția completă unui subprogram C care returnează suma elementelor divizibile cu 3 ale unui tablou unidimensional transmis ca parametru.
#include <stdio.h>
int sum3(int a[100], int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
            if(a[i]%3==0)
           sum=sum+a[i];
  return sum;
}
int main()
{
  int a[100],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf(sum3(a,n));
  return 0;
}
