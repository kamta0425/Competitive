import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		int n=sc.nextInt();
		int x=s.length();
		int c=0;
		for(int i=0;i<n;i++){
			c=0;
			String s1=sc.next();
			int y=s1.length();
			for(int j=0;j<y;j++)
				for(int k=0;k<x;k++){
					if(s.charAt(k)==s1.charAt(j))
					c+=1;
					break;
				}
			if(c==y)System.out.println("Yes");
			else System.out.println("No");
		}
		
	}
}