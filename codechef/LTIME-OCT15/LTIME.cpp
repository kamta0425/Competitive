 #include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{ int t;
scanf("%d",&t);
while(t--)
{ char a[105];
  int i,k,w[6]={0,0,0,0,0,0};
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  { if(a[i]=='L') w[0]++;
    else if(a[i]=='T') w[1]++;
    else if(a[i]=='I') w[2]++;
    else if(a[i]=='M') w[3]++;
    else if(a[i]=='E') w[4]++;
  }
  if(strlen(a)==9)
    {if(w[0]>=2 && w[1]>=2 && w[2]>=2 && w[3]>=2 && w[4]>=1)k=1;
     else k=0;
    }
  else if(strlen(a)>9)
    { if(w[0]>=2 && w[1]>=2 && w[2]>=2 && w[3]>=2 && w[4]>=2)k=1;
      else k=0;
    }
  else k=0;
  if(k==1)printf("YES\n");
    else printf("NO\n");


}
return 0;
}
