import java.io.*;
class chef_cakes
{
  public static void main(String args[])throws IOException
  {
    BufferedReader m=new BufferedReader(new InputStreamReader(System.in));
    /*StringTokenizer tk = new StringTokenizer(m.readLine());
    int t = Integer.parseInt(tk.nextToken());
    String s = tk.nextToken();
    */
    String s1=m.readLine();
    int p=Integer.parseInt(s1);
    for(int r=0;r<p;r++)
    { String s2=m.readLine();
      String s3=m.readLine();
      int nn=Integer.parseInt(s2);
      int mm=Integer.parseInt(s3);
      int sum=1,x=mm+1;
      while(x!=1)
      { x+=mm;
        sum++;
       if(x>nn)x-=nn;
      }
   if(sum==nn)
    System.out.println("Yes");
   else
    System.out.println("No "+sum);
   }
 }
}
