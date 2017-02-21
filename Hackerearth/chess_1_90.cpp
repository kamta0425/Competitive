#include <iostream>
using namespace std;

int f(int a,int b){
    if (a>b)return (a-b);
    return (b-a);
}
int main()
{
   int x,y,x1,y1,c=0;
   scanf("%d%d%d%d",&x,&y,&x1,&y1);
   while(true){
       if(x==x1 and y==y1)break;
       if(f(x,x1)==2 and f(y,y1)==0){c+=2;break;}
       if(f(x,x1)==0 and f(y,y1)==2){c+=2;break;}
       if(f(x,x1)==2 and f(y,y1)==2){c+=4;break;}
       if(f(x,x1)==1 and f(y,y1)==0){c+=3;break;}
       if(f(x,x1)==0 and f(y,y1)==1){c+=3;break;}
       if(f(x,x1)==1 and f(y,y1)==1){c+=2;break;}
       if(f(x,x1)==2 and f(y,y1)==1){c+=1;break;}
       if(f(x,x1)==1 and f(y,y1)==2){c+=1;break;}
       if(f(x,x1)==3 and f(y,y1)==1){c+=2;break;}
       if(f(x,x1)==1 and f(y,y1)==3){c+=2;break;}
       
       if(f(x,x1)>f(y,y1)){
          if(x>x1)x-=2;
          else x+=2;
          if(y>y1)y-=1;
          else y+=1;
       }else{
          if(x>x1)x-=1;
          else x+=1;
          if(y>y1)y-=2;
          else y+=2;
       }
       c++;
       //printf("h ");
       //printf("%d %d\n",x,y);
   }
   printf("%d\n",c);
   return 0;
}
