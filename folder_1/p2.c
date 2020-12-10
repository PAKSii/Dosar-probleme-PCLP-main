// Citirea a doua numere de la tastatura si determinarea operatiilor lor
#include <stdio.h>
void main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Suma celor 2 numere este %d\n",a+b);
  printf("Diferenta celor 2 numere este %d\n",a-b);
  printf("Produsul celor 2 numere este %d\n",a*b);
  printf("Catul celor 2 numere este %d\n",a/b);
}
