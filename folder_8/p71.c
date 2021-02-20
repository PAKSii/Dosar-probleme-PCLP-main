//Scrieți funcția recursivă IncDecRec care primind ca parametru un număr natural n, returnează numărul obținut din n prin scăderea cu 1 a fiecărei cifre impare și creșterea cu 1 a fiecărei cifre pare.
#include <stdio.h>
int  IncDecRec(long n)
{
    if(n<10)
        if(n%2==0)
        return (n+1);
    else
        return (n-1);
    else
        if(n%10%2==0)
        return (n%10+1)+10*IncDecRec(n/10);
    else
        return (n%10-1)+10*IncDecRec(n/10);
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(IncDecRec(n));
  return 0;
}
