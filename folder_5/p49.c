//Să se scrie o funcție C care să returneze cel mai mic număr care se poate scrie cu cifrele unui număr natural transmis ca parametru.
#include <stdio.h>
int cmmnr(int n)
{
    int cop=n,nr=0;
    int v[10];
    for(int i=0;i<=9;i++)
        v[i]=0;
    while(cop)
    {
    v[cop%10]++;
    cop/=10;
    }
    int i=1;
    while(v[i]==0)
        i++;
        nr=i;
        v[i]--;
    for(int i=0;i<=9;i++)
        if(v[i]!=0)
        for(int j=1;j<=v[i];j++)
                nr=nr*10+i;
    return nr;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(cmmnr(n));
  return 0;
}
