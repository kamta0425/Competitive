import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
		Scanner sc =new Scanner(System.in);
		int t=sc.nextInt();
		for(int k=0;k<t;k++){
		    int s=sc.nextInt();
		    int v=sc.nextInt();
            /*Double ans = new BigDecimal((2*s)/(3*v))
                .setScale(6, BigDecimal.ROUND_HALF_UP)
                .doubleValue();
		    */
		    Double ans=( (2.0*s)/(3.0*v) );
		    System.out.printf("%.7f\n",ans);
		    //System.out.println(ans);
		}
	}
}