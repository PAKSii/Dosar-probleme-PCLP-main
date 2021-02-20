//Fie r un număr real citit de la tastatură, care reprezintă lungimea razei unui cerc. Să se scrie un program care să calculeze și să afișeze aria și perimetrul discului de rază r.
#include <stdio.h>
#include <math.h>

int main()
{
double pin=(atan(1))*4;
double raza;
scanf("%lf",&raza);
printf("%.15lf",pin*(raza*raza));
printf("%.15lf",2*pin*raza);
return 0;
}
