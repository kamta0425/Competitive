#include<iostream>
using namespace std;

int main()
{int t,i,n,*c,s;
char b[1000];
 cin>>t;
 while(t--)
 {s=0;
  cin>>n;
  c=new int[n];
  cin>>b;
  c[0]=c[n-1]=(-1);
  for(i=1;i<n-1;i++)
  { c[i]=(-1);
    if(b[i]=='1')
    {b[i-1]='1';
     c[i]=i+1;
    }
  }
  if(b[0]=='1') b[1]='1';
  if(b[n-1]=='1') b[n-2]='1';

  for(i=0;i<n;i++)
  { if(c[i]!=(-1)) b[c[i]]='1';
    if(b[i]=='1')s++;
  }
  cout<<n-s<<endl;

 }
return 0;
}
