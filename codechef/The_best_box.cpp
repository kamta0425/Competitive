#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int  main()
{int p,s,t;
float l1,l2;
cin>>t;
while(t--)
{ cin>>p>>s;
  l1=sqrt(p*p-24*s);
  l2=(((p)-l1)/12.0);
 cout<<fixed<<setprecision(2)<<(l2*l2*l2)<<endl;

 return 0;
}
}
/*int  main()
{int p,s,t;
float l1,l2;
cin>>t;
while(t--)
{ cin>>p>>s;
  l1= p/12.0;
  l2=sqrt(s/6.0);
 if(l1<l2)cout<<fixed<<setprecision(2)<<(l1*l1*l1)<<endl;
 else cout<<fixed<<setprecision(2)<<(l2*l2*l2)<<endl;
}
return 0;
}*/
