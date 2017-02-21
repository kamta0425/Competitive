#include<stdio.h>

inline int gcd(int a,int b)
{
     if(a==0)
        return b;
     else
        return gcd(b%a,a);
}

int main()          /// gcd() problem
{ int t;
 scanf("%d",&t);
 while(t--)
 { int a,b,n;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i=1;i<n;i++)
    { scanf("%d",&b);
      a = gcd(a,b);
    }
  printf("%d\n",a);
 }
return 0;
}

