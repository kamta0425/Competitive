#include<iostream>
#include<algorithm>
using namespace std;

int main()
{int n,t,i,j;
cin>>t;
while(t--)
{   cin>>n;
    int w1[30],w2[30],c=0;

        for(j=0;j<n;j++)cin>>w1[j];
         for(j=0;j<n;j++)cin>>w2[j];
         sort(w1,w1+n);
         sort(w2,w2+n);
       for(i=0;i<n;i++)
       { for(j=i+c;j<n;j++)
         { if(w1[i]>w2[j]) c++;
           else break;
         }
       }
   cout<<n-c<<endl;
}
return 0;
}
