#include<stdio.h>
int main()
{ int i,j,k,t,n,s,*a;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d",&n,&k);
    a=new int[n];

    for(i=0;i<n;i++)
    scanf("%d",a[i]);

    for(i=0;i<n;i++)
    {  if((a[i]%2)==0)
         {  s=0;
             for(j=i+1;j<n;j++)
             { if(a[j]%2==0) s++;
               else break;
               if(s==k) goto p;
             }

         }

    }

    if(s!=k)printf("NO\n");
    p:printf("YES\n");
  }


return 0;
}
