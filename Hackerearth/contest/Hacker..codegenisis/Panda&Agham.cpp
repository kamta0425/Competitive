#include<stdio.h>
#include<algorithm>
#define gc getchar
using namespace std;

void scant(int &x)
{
register int c=gc();
x=0;
for(;c<48||c>57;c=gc());
for(;c>47&&c<58;c=gc())
{
x=(x<<1) +(x<<3)+c-48;
}
}
int main()
{ int t;
scant(t);
while(t--)
{ int n,k,*x,s;
  scant(n);
  scant(k);
  x=new int[n];
  for(int i=0;i<n;i++)
     scant(x[i]);
  sort(x,x+n);
  s=(x[n-1]-x[0])/(k-1);
  printf("%d\n",s);
}
return 0;
}
