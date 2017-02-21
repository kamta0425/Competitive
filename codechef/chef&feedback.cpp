#include<iostream>
#include<string.h>
using namespace std;

int main()
{ char a[100000],b[]={'0','1','0'},c[]={'1','0','1'};
  int i,l,k=0,t;
  cin>>t;
  while(t--)
  {k=0;
  cin>>a;
   l=strlen(a);
   for(i=0;i<l-2;i++)
   { if(a[i]=='0')
      { if(a[i+1]=='1' && a[i+2]=='0') {k=1;break;}
        else k=0;
      }
     else
      { if(a[i+1]=='0' && a[i+2]=='1') {k=1;break;}
        else k=0;
      }
   }
   if(k==1)cout<<"Good"<<endl;
   else cout<<"Bad"<<endl;
  }
return 0;
}
