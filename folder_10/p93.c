//Să se scrie o funcție C care să determine oglinditul unui număr natural transmis ca parametru. Funcția va întoarce rezultatul prin intermediul unui parametru de ieşire.
#include <stdio.h>
void oglindit(int n,int copie=0)
{
    while(n)
    {
        copie=copie*10+n%10;
        n/=10;
    }
    printf("%d",copie);
}
int main()
{
  int n,copie;
  scanf("%d",&n);
  oglindit(n,copie);
  return 0;
}
