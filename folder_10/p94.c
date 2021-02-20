//Să se scrie o funcție care are ca parametru un număr natural n și returnează cel mai mare număr care poate fi obținut mutând, pe rând, prima cifră a numărului n și a celor obținute pe parcurs, pe ultima poziție. Nu se vor folosi șiruri de caractere și tablouri auxiliare.
#include <stdio.h>
int nrmaxim(int n)
{
    int nr_nou=n,p,cop,max1;
    max1=n;
    do {

        cop=nr_nou;
        nr_nou=0;
        p=1;
        while(cop>9) {
            nr_nou=p*(cop%10)+nr_nou;
            p=p*10;
            cop/=10;

        }
        nr_nou=nr_nou*10+cop;
        if(nr_nou>max1)
            max1=nr_nou;
    } while(nr_nou!=n);
    return max1;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(nrmaxim(n));
  return 0;
}
