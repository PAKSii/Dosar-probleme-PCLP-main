//Să se scrie un subprogram C prin care se dublează prima cifră a unui număr natural n transmis ca parametru. Funcția întoarce rezultatul prin intermediul aceluiași parametru n.
#include <stdio.h>
void dublare1(int n)
{
    int cop=n,cnt=1;
    while(cop>=10)
    {
        cop/=10;
        cnt++;
    }
    cop=cop*pow(10,cnt);
    n=cop+n;
}
int main()
{
  int n;
  scanf("%d",&n);
  dublare1(n);
  return 0;
}
