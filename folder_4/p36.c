//Se dă un număr natural n. Să se afişeze în ordine crescătoare, primii n termeni ai şirului lui Fibonacci.
#include <stdio.h>
int main()
{
   int a,b,c,n;
   scanf("%d",&n);
   a=b=1;
   if(n==1)
    printf("%d",a);
   else
    if(n==2)
        printf("%d %d ",a,b);
    else
        printf("%d %d",b,a);
            for(int i=3;i<=n;i++)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
    return 0;
}
