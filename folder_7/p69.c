//Să se scrie o funcție C recursivă care să returneze cea mai mare cifră pară a unui număr natural transmis ca parametru.
int cifmaxpar(int n)
{
    if(n<10&&n%2==1)
        return -1;
    else
        if(n<10&&n%2==0)
        return n;
    else
    {
        int cif=cifmaxpar(n/10);
        if(n%2==0)
        {
            if(cif==-1)
                return n%10;
            else
                if(cif>n%10)
                return cif;
            else
                return n%10;
        }
        else
            return cifmaxpar(n/10);
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(cifmaxpar(n));
  return 0;
}
