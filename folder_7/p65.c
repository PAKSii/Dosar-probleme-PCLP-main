//Să se scrie o funcție C recursivă care determină suma cifrelor unui număr natural n transmis ca parametru și întoarce rezultatul prin intermediul unui parametru de ieșire.
#include <stdio.h>
void sumcif(long n, int s)
{
    if(n<10)
        s=n;
    else
        {

        sumcif(n/10,s);
        s=s+n%10;
        }
}
int main()
{
  long n;
  int s;
  scanf("%l%d",&n,&s);
  sumcif(n,s);
  return 0;
}
