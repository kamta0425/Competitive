
#include <cstdio>

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int i,n,s=0,d,r;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {scanf("%d",&r);
     s+=r;
    }
    s+=(n-1)*10;
    if(s>d)
      printf("%d\n",-1);
    else //=
      printf("%d\n",(2*(n-1)+(d-s)/5));
  }
return 0;
}
