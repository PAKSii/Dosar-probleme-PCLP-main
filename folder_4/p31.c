//Scrieţi un program care citeşte de la tastatură un număr natural n şi construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, în care fiecare element aflat pe chenarul exterior al matricei este egal cu suma dintre indicele liniei şi indicele coloanei pe care se află, iar fiecare dintre celelalte elemente este egal cu suma celor trei “vecini” situaţi în matrice pe linia anterioară.
#include <stdio.h>
int main()
{
   int a[25][25],n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(i==1||i==n||j==1||j==n)
    a[i][j]=i+j;
   else
    a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
      printf("\n");
   }
    return 0;
}
