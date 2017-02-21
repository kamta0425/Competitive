#include<cstdio>

int main()
{ int t;
 scanf("%d",&t);
while(t--)
{ unsigned long long int n,k;   /// dont use high format unless required
  scanf("%llu %llu",&n,&k);     /// otherwise giving garbage value

  if(n==0)
     printf("%d %d\n",0,0);
  else if(k==0 or n<k)
     printf("%d %llu\n",0,n);
  else
     printf("%llu %llu\n",n/k,n%k);
}
return 0;
}
