//Se citește de la tastatură un număr natural de 3 cifre, distincte. Să se afișeze pe ecran cifra din mijloc, ca valoare.
#include <stdio.h>
int main()
{
    int nr,a,b,c;
scanf("%d",&nr);
a=nr/100;
b=nr%100/10;
c=nr%10;
if((a>b)&&(b<c))
{
    if(a>c)
printf("%d",c);
else
printf("%d",a);
}
if((a<b)&&(b>c))
{
    if(a<c)
    printf("%d",c);
    else
    printf("%d",a);
}
if((a<b)&&(b<c))
    printf("%d",b);
    if((a>b)&&(b>c))
    printf("%d",b);
    return 0;
}
