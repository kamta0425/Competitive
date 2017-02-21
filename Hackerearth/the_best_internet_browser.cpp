#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>

int main()
{ int t;
 cin>>t;
  if(t>=1 && t<=100)
  { char a[t][200],c[t];
    int i,j;
      for(i=0;i<t;i++)
       { cin>>a[i];
         c[i]=0;
         if(strlen(a[i]) >=1 && strlen(a[i])<=200)
         {
          for(j=0;j<strlen(a[i]);j++)
           { if(a[i][j] >=65 && a[i][j]<=90) exit(0);
                if(j<(strlen(a[i])-4))
                {
                  if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u') c[i]++;
                }
           }
         if(a[i][0]=='w' && a[i][1]=='w' && a[i][2]=='w' && a[i][3]=='.' && a[i][(strlen(a[i])-1)]=='m' && a[i][(strlen(a[i])-2)]=='o' && a[i][(strlen(a[i])-3)]=='c' && a[i][(strlen(a[i])-4)]=='.')
         continue;
         else exit(0);
         }
         else exit(0);
      }

    for(i=0;i<t;i++) cout<<(strlen(a[i])-c[i]-4)<<"/"<<strlen(a[i])<<endl;

  }
return 0;
}
