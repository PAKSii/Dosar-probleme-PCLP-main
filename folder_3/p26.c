//Scrieți un program care cere de la tastatură un număr a (de o cifră) și care afișează valoarea expresiei a^16.
#include <stdio.h>
#include <math.h>
int main()

{
    long double n;
    scanf("%Lf",&n);
    printf("%.100f",pow(n,16));
    return 0;
}
