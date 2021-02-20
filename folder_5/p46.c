//Să se scrie o funcție C care să determine suma cifrelor unui număr natural transmis ca parametru. Funcția întoarce rezultatul prin intermediul unui parametru de ieşire.
#include <stdio.h>
void sum_cif(int a,int b)
{
    b=0;
    while(a)
    {
        b=a%10+b;
        a/=10;
    }
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  sum_cif(a,b);
  return 0;
}
