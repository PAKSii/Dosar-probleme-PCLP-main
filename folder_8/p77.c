//Să se scrie o funcție C recursivă care returnează factorialul unui număr dat ca parametru.
#include <stdio.h>
int factorial(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(factorial(n));
  return 0;
}
