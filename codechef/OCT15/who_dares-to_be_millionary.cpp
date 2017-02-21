#include<stdio.h>
using namespace std;
#include<algorithm>

int main()
{ int t;
 scanf("%d",&t);
while(t--)
{ int i,n,c=0;
  long long w[1005];
  char cA[1005],rA[1005];

  scanf("%d",&n);
  scanf("%s %s",rA,cA);
  for(i=0;i<=n;i++)
  scanf("%lld",&w[i]);

  for(i=0;i<n;i++)
     {  if(cA[i]==rA[i])
        c++;
     }
     if(c!=n)
     sort(w,w+c+1);
     printf("%lld\n",w[c]);
}
return 0;
}
