// Rezolvarea problemei : Fie r un număr real citit de la tastatură, care reprezintă lungimea razei unui cerc. Să se scrie un program care să calculeze și să afișeze aria și perimetrul discului de rază r.
#include <stdio.h>
#include <math.h>
void main()
{
  float pi=3.14,r;
  scanf("%f",&r);
  printf("Aria discului de raza %.3f este %.3f\n",r,pi*pow(r,2));
  printf("Perimetrul discului de raza %.3f este %.3f",r,2*pi*r);
}
