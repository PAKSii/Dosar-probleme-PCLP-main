// Rezolvarea problemei : Pe planeta Marte anul marțian durează z zile marțiene. Marțianul Iggle își serbează ziua de naștere și constată că a trăit n zile. Câte lumânări va avea tortul lui Iggle?
#include <stdio.h>
void main()
{
  int n,z;
  scanf("%d%d",&z,&n);
  printf("Tortul lui Iggle va avea %d lumanari",n/z);
}
