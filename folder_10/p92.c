//Să se scrie o funcție C care să returneze suma factorialelor cifrelor unui număr natural transmis ca parametru.
#include <stdio.h>
int sumfactcif(long n)
{
int copie,x=1,uc,s=0;
if(n<=9)
{
    for(int i=1;i<=n;i++)
        x*=i;
    return x;

}
do
{

    s=s+sumfactcif(n%10);
    s++;
    n/=10;
}while(n>9);
return s;
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(sumfactcif(n));
  return 0;
}
