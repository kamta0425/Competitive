#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()              /// incomplete
{ int t;
scanf("%d",&t);
while(t--)
{int r,n,j,d,k=0,i,x=0,s=0,y[100];
 char a;

 scanf("%d %d",&n,&d);
 for(i=0;i<n;i++)           ///calculating X
   x+=d*pow(10,i);
 x=x*x;               ///Calculating Y

 for(i=x;i!=0;i/=10)      ///assinging each digit of squared no. to arayr Y[]
  y[k++]=i%10;

 for(i=0;i<k/2;i++)       ///reversing the digit string
 { r=y[i];
   y[i]=y[k-1-i];
   y[k-1-i]=r;
 }

 ///strrev(y);               ///cant use strrev() if array is of int instead of char
 for(i=0;i<k;i++)
 {                          ///problem from here
   s+=pow(23,i)*y[i];    ///p0*y[0]+p1*y[1]+.......p(n-1)*y[n-1]
 }

 //printf("%d %s\n",x,y);
 printf("%d\n",s);
 for(i=0;i<k;i++)
  printf("%d ",y[i]);
}
return 0;
}
