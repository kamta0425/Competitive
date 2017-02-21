#include<stdio.h>

long long x[5001];

int main()
{ int a=0,b=1,t,i,s=0,n;
     for(i=0;i<=5000;i++)
        { x[i]=a;
          s=a+b;
          a=b;
          b=s;
        }

  scanf("%d",&t);
  while(t--)
  {  scanf("%d",&n);
    for(i=0;i<=5000;i++)
     {if(n==x[i] )
       break;
     }
     if(i==5001)
     printf("NO\n");
     else
     printf("YES\n");
  }
return 0;
}
