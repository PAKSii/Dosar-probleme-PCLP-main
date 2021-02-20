//Scrieţi un program care citeşte de la tastatură două numere naturale nenule n şi m şi care construieşte în memorie şi apoi afişează o matrice A cu n linii şi m coloane astfel încât prin parcurgerea acesteia linie cu linie de sus în jos şi fiecare linie de la stânga la dreapta, se obţin în ordine descrescătoare toate numerele naturale de la 1 la m*n.
#include <stdio.h>
int main()
{
   int a[25][25],n,i,j,m,nr=1;
   scanf("%d%d",&n,&m);
   for(i=n;i>=1;i--)
    for(j=m;j>=1;j--)
    a[i][j]=nr++;
    for(i=1;i<=n;i++)
       {
        for(j=1;j<=m;j++)
        printf("%d\n",a[i][j]);
       }
    return 0;
}
