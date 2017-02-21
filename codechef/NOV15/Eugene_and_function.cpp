#include<stdio.h>
#define gc getchar

void scant(long long int &x)
{
register long long int c=gc();
x=0;
for(;c<48||c>57;c=gc());
for(;c>47&&c<58;c=gc())
{
x=(x<<1) +(x<<3)+c-48;
}
}

int main()     ///no need to declare array direct use single int z here for every loop operation
{ long long int temp;
scant(temp);
while(temp--)
{ long long int z,sum=0,s=0,lt,rt,aa,dif,i,k;
  scant(aa);scant(dif);scant(lt);scant(rt);

  for(i=lt-1;i<rt;i++)
  { z=aa+(i*dif);
     s=0;k=z;
     while(z>=10)
     {  s+=(k%10);
        k/=10;
        if(k==0)
        {k=z=s;s=0;
        }
     }
   sum+=z;
  }
  printf("%d\n",sum);
}
return 0;
}


