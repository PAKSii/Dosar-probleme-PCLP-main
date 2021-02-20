//Să se scrie o funcție C recursivă care determină cel mai mare divizor comun a două numere transmise ca parametri și întoarce rezultatul prin intermediul unui parametru de ieșire.
#include <stdio.h>
int cmmdc(int a,int b,int r)
{
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
  int a,b,r;
  scanf("%d%d",&a,&b);
  printf(cmmdc(a,b,r));
  return 0;
}
