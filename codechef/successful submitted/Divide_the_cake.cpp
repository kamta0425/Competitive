#include<iostream>
using namespace std;

int main()
{ int n,i,t,s=0;
char a,b,c;
cin>>t;
while(t--)
{ cin>>n;
 if((360%n)==0) a='y';
 else a='n';
 if(n<=360) b='y';
 else b='n';
  s=(n*(n-1))/2;
 if((360-s)>(n-1)) c='y';
 else c='n';

cout<<a<<" "<<b<<" "<<c<<endl;
}
return 0;
}
