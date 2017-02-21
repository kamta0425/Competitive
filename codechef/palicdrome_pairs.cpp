#include<stdio.h>
#include<string.h>
inline int p(char s1[],char s2[],int l) ///incomplete
{ int i,k=0;
  char *s=new char[l];
  s=NULL;
  strcpy(s,s1);strcat(s,s2);
  printf("%s %d\n",s,l);
  for(i=0;i<l/2;i++)
  { if(s[i]==s[l-1-i]) k=1;
    else
    { k=0;
      break;
    }
  }
  if(k==1)return 1;
  s=NULL;
  strcpy(s,s2);strcat(s,s1);
  for(i=0;i<l/2;i++)
  { if(s[i]==s[l-1-i]) k=1;
    else
    { k=0;
      break;
    }
  }
  return k;
}

int  main()
{int t;
scanf("%d",&t);
while(t--)
{ int n,i,j,c=0,k=1000002;
  char *a[1002];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { a[i]=new char[k+1];
    scanf("%s",a[i]);
    k=k-strlen(a[i]);
  }
  for(i=0;i<n-1;i++)
  {  for(j=i+1;j<n;j++)
     {
      if(p(a[i],a[j],strlen(a[i])+strlen(a[j]) )) c++;
     }
  }
printf("%d\n",c);
}
return 0;
}
