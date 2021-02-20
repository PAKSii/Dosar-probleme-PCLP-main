//Să se scrie o funcție C care să realizează permutarea circulară spre stânga a cifrelor unui număr natural. Numărul este transmis prin intermediul unui parametru care se întoarce din funcție modificat.
#include <stdio.h>
void perm(int n)
{
    int cop=0,p=1;
    while(n>9)
    {
        cop+=(n%10)*p;
        p*=10;
        n/=10;
    }
    cop=cop*10+n;
    n=cop;
}
int main()
{
  int n;
  scanf("%d",&n);
  perm(n);
  return 0;
}
