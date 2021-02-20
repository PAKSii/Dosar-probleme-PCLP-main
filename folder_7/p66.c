//Să se scrie o funcție C recursivă care determină factorialul unui număr transmis ca parametru și întoarce rezultatul prin intermediul unui parametru de ieșire.
#include <stdio.h>
void factorial(int n,int f)
{
    if(n==0||n==1)
        f=1;
    else
        {
            factorial(n-1,f);
            f=f*n;
        }
}
int main()
{
  int n,f;
  scanf("%d%d",&n,&f);
  factorial(n,f);
  return 0;
}
