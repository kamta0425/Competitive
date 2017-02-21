#include<stdio.h>
#define gc getchar

void scant(int &x)
{
register int c=gc();
x=0;
for(;c<48||c>57;c=gc());
for(;c>47&&c<58;c=gc())
{
x=(x<<1) +(x<<3)+c-48;
}
}

int main()
{ int t;
//scant(t);
scanf("%d",&t);
while(t--)
{ int k,r,i=2,n,d=2;
  //scant(n);
  scanf("%d",&n);
  k=n-2;
  if(n==1)
  { d=1;goto g;}
  else if(n==3 || n==4)
  { d=3;goto g;}

   while(k!=0)
   { r=k-i;
     if(r==i || r==(i-1) || r==(i+1))
     {d+=2;break;}
     else if(r>(2*i+1))
     {k-=i;d++;i++;}
     else if(r>i)
     {k-=i;d++;
       if(i>(k-i))
       {i--;d++;break;}
     }
   }
g:printf("%d\n",d);
}
return 0;
}
