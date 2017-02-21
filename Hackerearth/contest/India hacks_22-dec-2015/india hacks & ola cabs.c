#include<stdio.h>

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int i,n,s=0,s1=0,s2=0,s3=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { scanf("%d",&r);
      if(r==4) s++;
      else if(r==1)s1++;
      else if(r==2)s2++;
      else  s3++;
    }
    if(s1==s3)
    { if(s2%2==0)
      s+=(s1+s2/2);
      else s+=(1+s1+s2/2);
    }
    else if(s1<s3)
    {s+=s3;
       if(s2%2==0)
       s+=s2/2;
      else s+=(1+s2/2);
    }
    else{
       s+=s3;s1-=s3;
       if(s2%2==0)
       { s+=s2/2;
          if(s1%4==0)s+=s1/4;
          else s+=1+s1/4;
       }
       else
       { s+=(1+s2/2);
         s1-=2;
         if(s1>0) s+=(1+s1/4);
       }
    }
    printf("%d\n",s);
  }
return 0;
}
