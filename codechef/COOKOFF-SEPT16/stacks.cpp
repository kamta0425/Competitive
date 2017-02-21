#include<stdio.h>

int main()
{ int t;
scanf("%d",&t);
while(t--)
 { int n,j,i,*a,*b,k=0;
   scanf("%d",&n);
   a=new int[n];
   b=new int[n];
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   b[0]=a[0];
   for(i=1;i<n;i++)
   {
       for(j=0;j<=k;j++)
       {   if(a[i]<a[j])
            {a[j]=a[i];
              break;
            }
           else if(j==k)
            a[++k]=a[i];

       }
   }
   printf("%d ",k);
   for(i=0;i<k;i++)
   printf("%d ",b[i]);
 }
return 0;
}
