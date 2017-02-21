#include<stdio.h>
#include<math.h>

int main()
{  int i,n,t,c;
  scanf("%d",&t);
  while(t--)
  {  int a[100],k=0;
      scanf("%d",&n);
     if( (int)sqrt(n)==sqrt(n))
       { c=0;
         goto l;
       }
     for(i=1;i<=n;i++)
      { if(n%i==0)
          a[k++]=i;
      }
      c=100000000;
       for(i=0;i<k/2;i++)
      { if(c>(a[k-1-i]-a[i]))
         {c=a[k-1-i]-a[i];
         }
      }
     l: printf("%d\n",c);
  }
return 0;
}
