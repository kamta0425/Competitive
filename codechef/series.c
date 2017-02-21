#include<stdio.h>

int f(int t)
{int p=1,i;
 for (i=1;i<=t;i++)
 p=p*i;
return p;
}
int main()
{
float i,s=0;
for (i=1;i<=3;i++)
{ s=s+i/f(i);

}

printf("%10f",s);
return 0;
}
