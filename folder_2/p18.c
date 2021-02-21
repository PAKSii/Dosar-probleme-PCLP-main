// Rezovarea problemei : Se dă un număr natural nenul n. Să se determine cel mai mic număr natural, mai mare sau egal decât n, care are ultimele două cifre egale cu 0.
#include <stdio.h>
void main()
{
  int n,n_1;
  scanf("%d",&n);
  n_1=n-n%100;
  n-n_1<(n_1+100)-n ? printf("%d",n_1) : printf("%d",n_1+100);

}
