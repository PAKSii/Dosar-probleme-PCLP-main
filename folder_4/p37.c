//Să se scrie un program care citește numărul natural n și determină valoarea lui n!=1*2*3*...*n.
#include <stdio.h>
int main()
{
    long long n,i,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s*=i;
      printf("%d",s);
    return 0;
}
