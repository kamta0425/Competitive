#include<stdio.h>
#include<string.h>
int main()       ///to be continue
{ int t;
scanf("%d",t);
while(t--)
{ int i,c=0;
  char l1[200005],l2[200005],s[200005],a[5];
  scanf("%s%s",l1,l2);
  if(l1[0]=='#' && l2[0]=='#'){ c=-1; goto x;}
  else if(l1[0]=='#')
  {strcpy(s,l1);
   strcpy(l1,l2);
   strcpy(l2,s);
  }

  while(i<strlen(l1))
  {

  i++;}

  if(c==-1)printf("No\n");
  else printf("Yes\n%d",c);

}
return 0;
}
