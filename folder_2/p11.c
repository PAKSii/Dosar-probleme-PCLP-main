// Rezolvarea Problemei : Să se scrie un program care determină maximul a două numere întregi citite de la tastatură.
#include <stdio.h>
void main()
{
  unsigned int a,b;
  scanf("%u%u",&a,&b);
  a > b ? printf("%d",a) : printf("%d",b);
}
