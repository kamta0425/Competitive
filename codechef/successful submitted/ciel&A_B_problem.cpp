#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{ int a,b,c,k;
  cin>>a>>b;
  if(a<=b) exit(0);
  c=a-b;
  k=c%10;
  if(k!=9) cout<<c+1;
  else cout<<c-1;

return 0;
}
