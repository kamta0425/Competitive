#include<stdio.h>
int get();           // incomplete sorting and size check remain
int sort(int x);

int main()
{int i,n,t[100];
scanf("%d",&n);
for(i=0;i<n;i++)
 { t[i]=get();}

  for(i=0;i<n;i++)
   {if(t[i]==1)
 printf("Possible\n");
 else
 printf("Not possible\n");
   }

return 0;
}

int get()
{ int boys,girls,i;
  scanf("%d %d",&boys,&girls);
  int b[boys],g[girls];
  b[boys]=sort(boys);
  g[girls]=sort(girls);
  if  (boys<=girls)
  { for (i=0;i<boys;i++)
    if(b[i]>g[i])continue;
    else break;
  }
  else
  {  for (i=0;i<girls;i++)
    if(b[i]>g[i])continue;
    else break;
  }
 if (i==(girls-1) || i==(boys-1))
return 1;
 else
return 0;
}

int sort(int x)
{ int i,a[x],t;
  for(i=0;i<x;i++)
  {
    a[i]=scanf("%d",&t);
  }
return a[x];
}
