#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    long long int m,money=1000000000;
    double p,chef,frnd;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%lld %lf",&m,&p);
        chef=(1-pow(-p,m));
        chef/=(1+p);
        chef*=money;
        frnd=money-chef;
        printf ("%0.2lf %0.2lf\n",chef,frnd);
    }
    return 0;
}
