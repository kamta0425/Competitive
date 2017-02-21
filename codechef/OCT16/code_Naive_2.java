import java.io.*;
import java.util.Scanner;

class Main {
    int two,five,ans;
    static Main [] a;

    Main(){reset();}
    void reset(){ans=0;five=0;two=0;}
    void set(int x){
        while(x%10==0){ans++;x/=10;}
        while(x%5==0){five++;x/=5;}
        while(x%2==0){two++;x/=2;}
    }
    
    static void update(int l,int r,int x,int c){
        int five=0,two=0,ans=0,k=1;
        while(x%10==0){ans++;x/=10;}
        while(x%5==0){five++;x/=5;}
        while(x%2==0){two++;x/=2;}
        
        for(int i=l;i<=r;i++){
            if(c==2){
                a[i].reset();
                x=k;
                while(x%10==0){a[i].ans++;x/=10;}
                while(x%5==0){a[i].five++;x/=5;}
                while(x%2==0){a[i].two++;x/=2;}  
            }k++;
            a[i].ans+=ans;
            a[i].two+=two;
            a[i].five+=five;
        }
    }
    
    static long countZero(int l,int r){
        long two=0,five=0,ans=0;
        for(int i=l;i<=r;i++){
            ans+=a[i].ans;
            two+=a[i].two;
            five+=a[i].five;
        }
        ans+=Math.min(two,five);
        return ans;
    }
    
	public static void main (String[] args) {
	    a=new Main[100002];
	    Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		for(int k=0;k<t;k++){
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    for(int i=1;i<=n;i++){
		        a[i]=new Main();
		        int w=sc.nextInt();
		        a[i].set(w);
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

