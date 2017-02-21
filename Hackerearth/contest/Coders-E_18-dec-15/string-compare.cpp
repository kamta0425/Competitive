#include<cstdio>

char a[502],b[502];
int check(char a[],char b[])
{ int f=0,s=0;
  for(int i=0;a[i]!='\0' and b[i]!='\0';i++)
  {
      if(a[i]==b[i])s++;
      else if(i==0) f=1;
  }
  if(f)s=0;
  return s;
}

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { scanf("%s%s",a,b);
    printf("%d\n",check(a,b));
  }


return 0;
}
