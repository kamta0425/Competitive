#include<iostream>
using namespace std;

 int main()
 {int n,i,*a,c=0,s=0;
 cin>>n;
 a=new int[n];
 c=(n*(n+1))/2;
for(i=0;i<n;i++)
{cin>>a[i];
 s+=a[i];
}
 if(s==c)cout<<"YES";
 else cout<<"NO";
return 0;
 }
