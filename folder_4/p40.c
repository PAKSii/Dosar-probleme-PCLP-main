//Scrieți un program care citește de la tastatură un număr natural a și care afișează partea întreagă a valorii expresiei 3⋅(a2+a4)a2+a4+a2+a4√+a2+a4−−−−−−√.
#include <stdio.h>
#include <math.h>
int main()
{
 int a;
 scanf("%d",&a);
 printf("%d",floor((3*(pow(a,2)+pow(a,4)))/(pow(a,2)+pow(a,4)+sqrt(pow(a,2)+pow(a,4)))+sqrt(pow(a,2)+pow(a,4))));


return 0;
}
