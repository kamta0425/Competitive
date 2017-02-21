#include<stdio.h>
#include<algorithm>

int main()
{ int i,j,n,c,s,t,m;
scanf("%d",&t);
  while(t--)
  { scanf("%d %d",&n,&m);
    int *a=new int[m];
   for(i=0;i<m;i++)scanf("%d",&a[i]);
   std::sort(a,a+m);
   if(n==m)
   { s=n/2;
    goto t;}
   for(j=1;j<=m;j++)
   { s=0;
     c=m-1;
     for(i=0;i<j;i++){s+=a[i];}
     c=c-j;
     if(s==c)goto t;
     else if(s>c)
      { s=0;
        c=m-1;
        j--;
        for(i=0;i<j;i++){s=s+a[i];}
         if(j!=0){c-=j;}
         while(s!=c)
         { s++;  ///a[j]--;
         }
        goto t;

      }

   }

   t:printf("%d\n",s);
  }
 return 0;
}
