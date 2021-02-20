//Să se scrie o funcție C recursivă care să returneze cea mai mică cifră pară a unui număr natural transmis ca parametru.
#include <stdio.h>
int cifminpar(int n)
{
    if(n<10&&n%2==1)
        return -1;
    else
        if(n<10&&n%2==0)
        return n;
    else
    {
        int cif=cifminpar(n/10);
        if(n%2==0)
        {
            if(cif==-1)
                return n%10;
            else
                if(cif<n%10)
                return cif;
            else
                return n%10;
        }
        else
            return cifminpar(n/10);
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",cifminpar(n));
  return 0;
}
