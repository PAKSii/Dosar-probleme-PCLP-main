//Să se scrie o funcţie care primeşte ca argumente două numere naturale a şi b şi returnează numărul de elemente din intervalul [a,b] care au cifra de control egală cu a.
#include <stdio.h>
int sum_cifra_control(int a, long b)
{
    int ct=0;
    for(int i=a;i<=b;i+=9)
        ct++;
    return ct;
}
int main()
{
  int a;
  long b;
  scanf("%d%l",&a,&b);
  printf(sum_cifra_control(a,b));
  return 0;
}
