import java.util.*;
class Simple_sum
{
  public static void main(String args[])
  {
    Scanner m=new Scanner(System.in);
    int t=m.nextInt();
    for(int p=0;p<t;p++)
    {
      int n=m.nextInt();
      int s=0,k=1;
      for(int i=1; i<=n ; i++)
      { for(int j=1;j<=i;j++)
        { if(i%j==0 && n%j==0)
           k=j;
        }
        s=s+(n/k);
      }
      System.out.println(s);
    }
  }

}
