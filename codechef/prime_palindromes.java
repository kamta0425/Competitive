import java.util.Scanner;

class prime_palindromes{

  public static void main(String []args){
   System.out.println("hello kingkps");
   Scanner m=new Scanner(System.in);
   int c=0,k=0,i;
   int n=m.nextInt();
      if(n>0 && n<=1000000)
      { try{while(true)
            {  String a=""+n;             //String.valueOf(n);
              for(i=0;i<a.length()/2;i++)
              { if(a.charAt(i)==a.charAt(c-1-i)) k=1;
                else {k=0; break;}
              }
             if(k==1)
             { for(i=1;i<=n;i++) {if(n%i==0) c++;}
              if(c==2)
              {System.out.println(n);
              break;}
             }
            n++;
            }
          }catch(Exception e){}
      }
   }
}
