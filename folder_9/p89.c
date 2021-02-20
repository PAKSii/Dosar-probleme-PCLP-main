//Scrieţi definiţia completă a subprogramului C aranjare, care are doi parametri, v şi n, prin care primeşte un tablou unidimensional cu maximum 10000 de numere naturale nenule şi, respectiv, numărul de elemente din tablou. Subprogramul rearanjează elementele tabloului astfel încât toate valorile impare să se afle pe primele poziţii, iar valorile pare în continuarea celor impare.
#include <stdio.h>
int aranjare(int v[101],int n)
{
    int aux;
    for(int i=1;i<n;i++)
        if(v[i]%2==0)
    {
        aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
    }
     for(int i=1;i<n;i++)
        if(v[i]%2==0)
    {
        aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
    }
}
int main()
{
  int v[101],n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&v[i]);
  printf(aranjare(v,n));
  return 0;
}
