#include<iostream>
using namespace std;

unsigned long long fect(int x)
{ int i;
  unsigned long long f=1;
  for (i=1;i<=x;i++)
    f=f*i;
  return f;
}

int main()
{int t;
 cin>>t;
 if(t>=0 && t<=100)
 {
     unsigned long long f[t];
      int i,n[t];

      for(i=0;i<t;i++)
      {
         cin>>n[i];
         if (n[i]>=0 && n[i]<=100)
           f[i]=fect(n[i]);
         else
           break;
      }

      if (i==t)
      for(i=0;i<t;i++)
        cout<<f[i]<<endl;

 }
 return 0;
}
