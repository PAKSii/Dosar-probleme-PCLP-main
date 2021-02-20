/*
Scrieţi definiția completă a subprogramului shift care primește prin intermediul parametrului n o valoare naturală nenulă (n≤100), iar prin intermediul parametrului x, un tablou unidimensional cu n componente. Fiecare componentă a acestui tablou este un număr întreg care are cel mult 8 cifre.
Subprogramul permută circular cu o poziţie spre stânga primele n elemente ale tabloului x și furnizează tabloul modificat tot prin parametrul x.
*/
#include <stdio.h>
int citire_vector(int x[101],int n)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
}

void shift(int x[101],int n)
{
    int aux=x[0];
    for(int i=0;i<=n-1;i++)
        x[i]=x[i+1];
    x[n-1]=aux;
}
int main()
{
  int x[101],n;
  printf(citire_vector(x,n));
  shift(x,n);
  return 0;
}
