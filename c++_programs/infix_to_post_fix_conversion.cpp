#include<iostream>
#include<string.h>
using namespace std;

int check(char x)        ///infix_to_post_fix_conversion
{ if(x=='^')return 5;
  else if(x=='*' || x=='/')return 4;
  else if(x=='+' || x=='-')return 3;
  else if(x=='(' )return 2;
  else return 0;
}

int main()   ///incomplete  ( A*(B+C-D/E)/F )
{ int i,top=0,k=0;
char a[30],s[30],p[30];
cout<<"Write Infix Expression\n";
cin>>a;
strcat(a,")");
s[top++]='(';
for(i=0;a[i]!='\0';i++)
{ if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))   /// a[i]== 'a','b','c'....characters
   {
       p[k++]=a[i];
   }
  else
  {
     if( a[i] == '('  )
       s[top++]=a[i];

     else if(a[i]==')')
     {
        while(s[--top]!= '(' )
          p[k++]=s[top];
     }
     else       /// a[i]==*,+,-,/
      {
         if( check(a[i]) >= check(s[top-1]) )     ///     /,*  >  +,-
         {
           s[top++]=a[i];
         }
         else        ///check(a[i]) < check(s[top]     a[i] +,-  <  /,*
         {
           while(check(a[i]) < check(s[--top]))
             p[k++]=s[top];
           s[++top]=a[i];
         }
      }
  }
}
cout<<"\nPostfix Expression is: "<<endl<<p<<endl;
return 0;
}
