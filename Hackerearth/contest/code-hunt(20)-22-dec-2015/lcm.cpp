#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
#define N pow(2,30)

 /* int LCM(int a, int b)          ///submission TLE
   {
       int l = max(a,b);
       int s = min(a,b);
       int c = l;
       while (c%s!=0)c+=l;
       return c;
   }*/
int gcd(int a, int b)
{ if(b==0)return a;
  return gcd(b,b%a);
}
int lcm(int a,int b)
{ int i=2,m=1;
  while(a!=1 and b!=1)
  {
    while(a%i==0 or b%i==0)
    {
     m*=i;
     if(a%i==0)a/=i;
     if(b%i==0)b/=i;
     if(a==1 or b==1)return (m*max(a,b));
    }
    i++;
  }
  return max(a,b);
}

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int j,i,A,B;
    long long s=0,k=0;
    scanf("%d %d",&A,&B);
    for(i=1;i<=A;i++)
    {for(j=1;j<=B;j++)
       s+=(i*j)/gcd(i,j);
    }
    int z=min(A,B);
    for(i=2;i<=z;i++)
      if(i*i<=z)
        k+=(i*i);
    s-=k;
    while(s>=N)s-N;
    printf("%d\n",s);
    printf("%d\n",(10*12)/gcd(10,12));
  }
return 0;
}
