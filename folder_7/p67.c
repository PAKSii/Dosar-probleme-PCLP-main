//Să se scrie o funcție C recursivă care să determine cifra maximă și cifra minimă a unui număr natural transmis ca parametru. Funcția va întoarce rezultatele prin intermediul unor parametri de ieșire.
#include <stdio.h>
void cifmaxmin(long n, int  max, int min)
{
  if(n<10)
        {
            max=n;
            min=n;
        }
        else
        {
    cifmaxmin(n/10,max,min);
    if(max<n%10)
    max=n%10;
            else
                if(min>n%10)
                min=n%10;
        }
}
int main()
{
  int max,min;
  long n;
  scanf("%l%d%d",&n,&max,&min);
  cifmaxmin(n,max,min);
  printf("%d %d",max,min);
  return 0;
}
