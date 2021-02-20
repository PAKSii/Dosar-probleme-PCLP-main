//Scrieți definiția completă subprogramului C afismat care afișează pe ecran elementele unui tablou bidimensional.
#include <stdio.h>
void afismat(int a[100][100],int n,int m)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            printf("%d ",a[i][j])
    printf("\n");
}
int main()
{
  int a[100][100],n,m;
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  scanf("%d",&a[i][j]);
  afismat(a,n,m);
  return 0;
}
