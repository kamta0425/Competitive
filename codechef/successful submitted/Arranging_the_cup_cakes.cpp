#include<cstdio>
#include<cmath>

int main()
{  int t;
  scanf("%d",&t);
  while(t--)
  {  int i,n,s;
      scanf("%d",&n);
      int k=sqrt(n);
      for(i=k;i>0;i--)
      {  if(n%i==0)
         {
            printf("%d\n",-i+(n/i));
            break;
         }
      }
  }
return 0;
}
