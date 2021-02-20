//Se citesc două numere a și b reprezentând lungimile laturilor unui dreptunghi. Pentru dreptunghiul dat, să se calculeze: perimetrul P, aria A și pătratul lungimii diagonalei D.
#include <stdio.h>
int main()
{
    int a,b;
    int P,A,D;
    P=A=D=0;
    scanf("%d%d",&a,&b);
    P=2*(a+b);
    A=a*b;
    D=pow(a,2)+pow(b,2);
    printf("%d %d %d",p,a,d);
return 0;
}
