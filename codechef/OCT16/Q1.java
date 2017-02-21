import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
		Scanner sc =new Scanner(System.in);
		int t=sc.nextInt();
		for(int k=0;k<t;k++){
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    int c=sc.nextInt();
		    int x = (int)Math.pow(c,0.5);
		    int ans=0,u,v;
		    for(int i=1;i<=c;i++){
		        if(c%i==0){
		            u=i;v=c/i;
		            if(u<=n && v<=m){
		            	ans++;		               
		            } 
		        }
		    }
		    System.out.println(ans);
		}
	}
}