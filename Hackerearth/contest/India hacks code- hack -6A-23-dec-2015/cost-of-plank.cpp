#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;

int a[1000];
float A;
float cost(float x,float d)
{ float s=0;
   for(int i=x;i!=0;i/=10)
   { s+=i%10;
   }
   s*=(x*d*A);
   return s;
}
int main()
{
    int n,j,i,l,b,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    scanf("%d%d",&l,&b);
    A=l*b;
    float d;
    for(i=0;i<n;i++)
    {  if(a[i]<=10)d=0.75;
       else if(a[i]<=20)d=0.70;
       else d=.80;
       s+=(int)cost(a[i],d);
    }
    printf("%d\n",s);

return 0;
}
