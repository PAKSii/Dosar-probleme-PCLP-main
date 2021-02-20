//Se citește n număr natural. Calculați suma numerelor naturale mai mici sau egale cu n.
#include <stdio.h>
int main()
{
    unsigned long long n,s=0;
    scanf("%d",&n);
    if(n>=0)
        s=(n*(n+1))/2;
        else
        s=0;
    printf("%d",s);
return 0;
}
