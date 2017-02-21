#include<stdio.h>
 int f(int s)
{ int i,f=1;
  for(i=1;i<=s;i++)
  f=f*i;
  return f;
}

    int main()
{   int i,t[100],n,j[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&j[i]);
     printf("\n");
    }
    for(i=0;i<n;i++)
    {printf("%d\n",f(j[i]));
    }
    return 0;
}
