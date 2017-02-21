#include<stdio.h>
#include<string.h>

int main()
{ int t;
 scanf("%d",&t);
 while(t--)
 { int n,k,i,j,h=0;
   char s[6];
   scanf("%d %d",&n,&k);

   char **a=new char*[n];    /// dynamically array of pointers declaration
   for(i=0;i<n;i++)
   { a[i]=new char[6];
     scanf("%s",a[i]);       /// inputting N-dictionary strings
   }

   int *l=new int[k];
   char **p=new char*[k*50];
   for(i=0;i<k*50;i++)
   { p[i]=new char[6];
   }

   for(i=0;i<k;i++)          /// inputting integer L & corresponding l[i] strings
   { scanf("%d",&l[i]);
     for(j=0;j<l[i];j++)
     { scanf("%s",s);
       strcpy(p[h++],s);

     }
   }
   for(i=0;i<n;i++)        ///comparing & assing the answer as string found or not
   {  for(j=0;j<h;j++)
      { if(strcmp(a[i],p[j])==0)
           { strcpy(a[i],"YES");
             break;
           }
         else if(j==(h-1))
           {
             strcpy(a[i],"NO");
           }
       }
    printf("%s ",a[i]);    ///finally printing the answer
   }
  printf("\n");
 }
return 0;
}
