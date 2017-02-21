#include<stdio.h>
#define gc getchar

inline void scant(int &x)
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
{ int p;
scant(p);
while(p--)
{ int x,i,nn,mm,sum=1;
  scant(nn);
  scant(mm);
  x=mm+1;
   while(x!=1)
   {x=x+mm;
    sum++;
    if(x>nn)x-=nn;
   }
  if(sum==nn)
   printf("Yes\n");
  else
   printf("No %d\n",sum);
}
return 0;
}
