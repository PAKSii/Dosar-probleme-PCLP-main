//Să se scrie o funcție C recursivă cu trei parametri n, k, c și întoarce prin parametrul c numărul de cifre ale lui n care sunt mai mari sau egale decât k.
#include <stdio.h>
void cnt_cif(long n, int k, int c)
{
    if(n<10)
        if(n>=k)
        c=1;
        else
        c=0;
    else
    {
        cnt_cif(n/10,k,c);
        if(n%10>=k)
            c++;
    }
}
int main()
{
  long n;
  int k,c;
  scanf("%l%d%d",&n,&k,c);
  cnt_cif(n,k,c);
  return 0;
}
