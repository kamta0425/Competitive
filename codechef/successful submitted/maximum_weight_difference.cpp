#include<iostream>
#include<algorithm>
using namespace std;

int main()
{  int i,n,k,t,c1,s1,s2,c2;
 cin>>t;
  while(t--)
  { c1=0,s1=0,c2=0,s2=0;;
    cin>>n>>k;
    int *a=new int[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    { if(i<k)s1+=a[i];
      else c1+=a[i];

      if(i<(n-k))s2+=a[i];
      else  c2+=a[i];
    }



    if( (c1-s1) > (c2-s2) )cout<<c1-s1<<endl;
    else cout<<c2-s2<<endl;
  }
return 0;
}
