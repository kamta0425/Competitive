#include<cstdio>
#include<cstring>
#define N 1000002

int len,sum,a[N];
char s[N];

void check(int j)
{ if(j>=len) return;

  if(a[j]==0)
  { check(j+1);
    return;
  }

  if(a[j]%8==0)sum++;
  int i=j;
  int m=a[i];
  i++;
  while(i<len)
  { m=m*10+a[i];
    if(m%8==0)sum++;
    i++;
  }
  check(j+1);
}

int main ()
{ int i;
  scanf("%s",s);
  sum=0;
  len=strlen(s);
  for(i=0;s[i]!='\0';i++)
      a[i]=s[i]-48;
  check(0);
  printf("%d\n",sum);
  return 0;
}

