#include<iostream>     // not complete
using namespace std;

int n;
inline int mod(int a)
{
 if (a<0)
  a=0-a;
 return a;
}

int diff(int s[],int n)
{ int i,j,k,g;
 g=mod(s[0]-s[1]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {  k=s[i]-s[j];

      if( mod(k)<g )
        g=mod(k);
    }
return g;
}


int main()
{
  int t,i,j,*p;
  cin>>t;
  int m[t];
  if (t>=1 && t<=10)
{
  for (j=0;j<t;j++)
  {
    cin>>n;
    if( n>=2 && n<=5000)
    {
      int s[n];
      for(i=0;i<n;i++)
      {
          cin>>s[i];
          if(s[i]<1 && s[i]>1000000000)
          {cout<<"invalid value";
          break;
          }
      }
      m[j]=diff(s,n);
    }
 }
for(i=0;i<t;i++)
    cout<<m[i]<<endl;
}
return 0;
}


