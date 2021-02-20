//Să se determine maximul a două fracţii date.
#include <stdio.h>
#include <math.h>
struct fractie
{
    int x,y;

}f1,f2;
int main()
{
    int a,b,m,n;
  scanf("%d%d%d%d",&f1.x,&f1.y,&f2.x,&f2.y);
    if(f2.y*f1.x>f2.x*f1.y)
       {
        a=f1.x;
        b=f1.y;
       }
        else
            {
            a=f2.x;
            b=f2.y;
            }
    m=a;
    n=b;
        while(m!=n)
            if(m>n)
                m=m-n;
            else
                n=n-m;
    printf("%d %d",a/m,b/n);
return 0;
}
