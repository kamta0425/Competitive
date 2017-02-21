#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
                           ///incomplete
int f(char a[110])           ///a=97   z=122
{ int i,t=0;
 for(i=0;a[i]!='\0';i++)
   { if(a[i]>=94 &&a[i]<=122) continue;
     else t=1;
   }
  if(t==0) return 1;
  else return 0;
}

int main()
{int i,n;
cin>>n;
if(n>=1 && n<=10)
 { char a[n][110];
   for(i=0;i<n;i++)
   {
    cin>>a[i];
    if(strlen(a[i])>100) exit
   }
   for(i=0;i<n;i++)
   {
    cout<<f(a[1])<<endl;
   }
 }

return 0;
}
