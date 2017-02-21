#include<stdio.h>

int main()
{ int t;
 scanf("%d",&t);
 while(t--)
 { long long int n;
    scanf("%lld",&n);
    n=(3*n+n*n)/2;
  printf("%lld\n",n);
 }
return 0;
}

