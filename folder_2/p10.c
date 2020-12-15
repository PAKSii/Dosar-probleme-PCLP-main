// Rezolvarea problemei : Să se scrie un program care citeşte de la tastatură un număr natural şi verifică dacă numărul este par sau impar.
#include <stdio.h>
void main()
{
  int a;
  scanf("%d",&a);
  a%2==0 ? printf("Numarul %d este par.",a) : printf("Numarul %d este impar.",a);
}
