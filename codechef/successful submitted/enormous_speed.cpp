#include<iostream>
using namespace std;
int main()
{ int n,i,k,c=0;
 cin>>n>>k;
 int *p=new int[n];
 for(i=0;i<n;i++)
 { cin>>p[i];
   if(p[i]%k==0)c++;
 }
 cout<<c<<endl;
return 0;
}
