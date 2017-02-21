#include<stdio.h>
#include<algorithm>
int main()               ///partially solved
{ int t;
scanf("%d",&t);
while(t--)
{ int i,c=0;
  long long n,s,x=0,k=0,p[100005];
  scanf("%lld",&n);
  for(i=0;i<n;i++)
  scanf("%lld",&p[i]);
  s=n;
   for(i=0;i<n-1;i++)
   {  if(p[i]<=p[i+1]) c++;
      else
        { s=s+(c*(c+1))/2;
          c=0;
        }
   }
   s=s+(c*(c+1))/2;
printf("%lld\n",s);
}
return 0;
}
