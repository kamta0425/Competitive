#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{ int i,n,j;
 cin>>n;
  if(n<=1000 && n>=1)
  { long c[n],x[n];
    for(i=0;i<n;i++)
     {  cin>>x[i];
        if(x[i]<=0 || x[i]>100000) exit(0);
        c[i]=0;
         for(j=x[i];j!=0;j/10)
         {c[i]+=(x[i]%10);
         }

     }
     for(i=0;i<n;i++)
     {cout<<c[i]<<endl;}
  }
return 0;
}
