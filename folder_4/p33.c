//Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. Calculaţi cel mai mare divizor comun al sumei elementelor de deasupra diagonalei principale și al sumei elementelor de sub diagonala principală.
#include <stdio.h>
int main()
{
    int a[100][100],i,n,j,s1=0,s2=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
        s1+=a[i][j];
    for(i=2;i<=n;i++)
        for(j=1;j<=i-1;j++)
        s2+=a[i][j];
        while(s2!=0)
        {
         r=s1%s2;
         s1=s2;
         s2=r;
        }
        printf("%d",s1);
    return 0;
}
