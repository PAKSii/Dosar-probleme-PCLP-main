// Rezolvarea probleme : O cutie cu bomboane costă B lei. Gigel are S lei. Determinați câte cutii cu bomboane poate cumpăra Gigel și câți lei trebuie să mai primească pentru a cumpăra încă o cutie.
#include <stdio.h>
void main()
{
  int b,s;
  scanf("%d%d",&b,&s);
  printf("Gigel poate cumpara %d cutii de bomboane\n",s/b);
  printf("Gigel mai are nevoie de %d lei pentru a mai cumpara o cutie\n",b-s%b);
}
