#include<stdio.h>

int main()
{int g,t,i,n,q,j,s=0;
 scanf("%d",&t);
 while(t--)
 { scanf("%d",&g);;
   while(g--)
   {s=0;
    scanf("%d %d %d",&i,&n,&q);;
    for(j=1;j<=n;j=j+2)
    { s++;
    }
    if((i==1 && q==1) or (i==2 && q==2)) s=(n-s);

    printf("%d\n",s);
   }
 }
return 0;
}
