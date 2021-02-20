//Să se scrie o funcție C care să determine cea mai mare și cea mai mică cifră a unui număr natural transmis ca parametru. Funcția va întoarce rezultatele prin intermediul unor parametri de ieşire.
#include <stdio.h>
void cifminmax(int n,int mx,int mn)
{
mx=n%10;
mn=n%10;
    while(n)
    {
    int cif=n%10;
    if(cif>mx)
        mx=cif;
        if(cif<mn)
        mn=cif;

    n/=10;

    }
}
int main()
{
  int n,mx,mn;
  scanf("%d%d%d",&n,&mx,&mn);
  return 0;
}
