#include<iostream>
using namespace std;

int main()
{int t,i,n,c,*a,s;
 cin>>t;
 while(t--)
 {s=0;
  cin>>n>>c;
  a=new int[n];
  for(i=0;i<n;i++)
  {cin>>a[i];s+=a[i];}
  if(s<=c)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
 }

return 0;
}
