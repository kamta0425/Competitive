import java.io.*;
import java.util.Scanner;
 
class Main {
    static long [] a,b;
 
    static void update(int l,int r,int x,int c){
        int zero=0,k=1;
        while(x%10==0){zero++;x/=10;}
        for(int i=l;i<=r;i++){
            if(c==1){
                a[i]*=x;
                b[i]+=zero;
            }else{
                a[i]=k*x;
                b[i]=zero;
            }
            k++;
            while(a[i]%10==0){b[i]++;a[i]/=10;}
        }
    }
    
    static long countZero(int l,int r){
        long ans=0,k,two=0,five=0;
        for(int i=l;i<=r;i++){
            k=a[i];
            ans+=b[i];
            while(k%10==0){ans++;k/=10;}
            while(k%5==0){five++;k/=5;}
            while(k%2==0){two++;k/=2;}
        }
        if(five>two)ans+=two;
        else ans+=five;
        return ans;
    }
    
	public static void main (String[] args) {
	    a=new long[100002];
	    b=new long[100002];
	    Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		for(int k=0;k<t;k++){
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    for(int i=1;i<=n;i++){
		        a[i]=sc.nextLong();
		        b[i]=0;
		        while(a[i]%10==0){b[i]++;a[i]/=10;}
		    }
		    int c,l,r,x;
		    long ans=0;
		    for(int i=1;i<=m;i++){
		        c=sc.nextInt();
		        l=sc.nextInt();
		        r=sc.nextInt();
		        if(c==3){
		            ans+=countZero(l,r);
		        }else{
		            x=sc.nextInt();
		            update(l,r,x,c);
		        }
		    }
		    System.out.println(ans);
		}
	}
}