import java.util.Scanner;
public class smallfectorial 
{

   public static long fect(int x)
   {
    long f=1;
     for (int i=1;i<=x;i++)
       f=f*i;
     return f;
   }

    public static void main(String[] args)
    { Scanner m=new Scanner (System.in);
       int i;
        int t=m.nextInt();
        
         if(t>=0 && t<=100)
         {long[] f=new long[t];
         int[] n=new int[t];

         for( i=0;i<t;i++)
         {
         n[i]=m.nextInt();
         if (n[i]>=0 && n[i]<=100)
           f[i]=fect(n[i]);
         else
           break;
         }
        
        if ( i==t)
        for( i=0;i<t;i++)
        System.out.println(f[i]);

        } 
    }
}