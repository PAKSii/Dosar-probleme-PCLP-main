//Se dă o matrice pătratică cu n linii și n coloane și elemente numere naturale mai mici decât 1000. Să se afișeze în ordine strict crescătoare valorile situate sub diagonala principală și deasupra diagonalei secundare. Dacă o valoare apare în zona respectivă de mai multe ori, se va afișa o singură dată.
#include <stdio.h>
int n,a[201][201],v[1001],i,j;
int main()
{
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
   {
       scanf("%d",&a[i][j]);
       if(i>j&&i+j<=n)
        v[a[i][j]]++;
   }
   for(i=1;i<=1000;i++)
    if(v[i])
    printf("%d ",i);


    return 0;

}
