#include<iostream>
#include<algorithm>
using namespace std;

int main()
{int i,n,t,k;
 cin>>t;
 while(t--)
 { cin>>n;
   int *p=new int[n];
   for(i=0;i<n;i++) cin>>p[i];
   sort(p,p+n);
  for(i=1;i<=n-2;i+=2)
   { k=p[i];
     p[i]=p[i+1];
     p[i+1]=k;
   }
  for(i=0;i<n;i++) cout<<p[i]<<" ";
cout<<endl;
 }

return 0;
}
