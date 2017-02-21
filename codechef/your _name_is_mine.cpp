#include<cstdio>
#include<cstring>

int  main()
{int t;
scanf("%d",&t);
while(t--)             ///wrong answer
{   int c=0,i,j,k=0;
    char m[25002],w[25002];

    scanf("%s %s",&m,&w);
    if(strlen(m)>strlen(w))
    {   printf("NO\n");
        continue;
    }
    else if(strcmp(m,w)==0)
    {  printf("YES\n");
       continue;
    }
    for(i=0;i<strlen(m);i++)
    {   for(j=k;j<strlen(w);j++){
          k++;
          if(m[i]==w[j]){
            c++;
            break;
          }
        }
      if(j==strlen(w))break;
    }
  if(c==strlen(m))
    printf("YES\n");
  else
    printf("NO\n");
}
return 0;
}

