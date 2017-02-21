#include<stdio.h>
#define gc getchar
#include<iostream>
using namespace std;
inline void scant(int &x)
{
register int c=gc();
x=0;
for(;c<48||c>57;c=gc());
for(;c>47&&c<58;c=gc())
{
x=(x<<1) +(x<<3)+c-48;
}
}

int main()       //complexity o(n2) Getting TLE
{ int p;
  scant(p);
while(p--)
{ int i,r,s,k,j,x,num;
  long long sum=0;
  scant(num);

   if(num==1){printf("%d\n",1);continue;}
   if(num==2){printf("%d\n",3);continue;}
  for(x=2;x<num-1;x++)
   {  r=num%x;
     if(r==0) sum+=(num/x);
     else if(num%r==0 && x%r==0)sum+=(num/r);
     else
     { /*r=x/2;///r=min(r,x/2);
       while(num%r!=0 or x%r!=0)r--;
       sum+=(num/r);*/
       r=x/2;j=2;s=1;k=1;
       while(j<=r)
       { if(num%r==0 && x%r==0){s=r;goto z;}
         if(num%j==0 && x%j==0){k=j;}
         r--;j++;
       }
       z:sum+=(num/max(s,k));
     }
   }
   sum+=(2*num+1);
  printf("%d\n",sum);
}
return 0;
}
