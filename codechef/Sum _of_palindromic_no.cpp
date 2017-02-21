#include<stdio.h>
#include<algorithm>
inline int palin(int x)
{int i,j,a[100003],k;
 for(i=0;x!=0;x/=10)
 { a[i]=x%10;
   i++;
 }
 for(j=0;j<i/2;j++)
 {
     if(a[j]==a[i-j-1]) k=1;
     else {k=0;break;}
 }
return k;
}
int main()
{ int t;
scanf("%d",&t);
while(t--)
{ int i,s=0,l,r;
  scanf("%d %d",&l,&r);
  for(i=l;i<=r;i++)
   {  if(palin(i))
        s=s+i;
   }

   printf("%d\n",s);
}
return 0;
}
