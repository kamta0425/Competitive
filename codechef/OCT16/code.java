import java.io.*;
import java.util.Scanner;

class Main {
    int two,five,ans;     // change to long and test
    static Main [] a;
	static int []  b;

    Main(){reset();}
    void reset(){ans=0;five=0;two=0;}
    void set(int x){
        while(x%10==0){ans++;x/=10;}
        while(x%5==0){five++;x/=5;}
        while(x%2==0){two++;x/=2;}
    }
    void set(Main x){
        ans+=x.ans;
        five+=x.five;
        two+=x.two;
    }
    
    static void createTree(int pos,int s,int e){
        a[pos]=new Main();
        if(s!=e){
            int mid=(s+e)/2;
            createTree(2*pos,s,mid);
            createTree(2*pos+1,mid+1,e);
            int c = a[pos*2].two+a[pos*2+1].two;
            int d = a[pos*2].five+a[pos*2+1].five;
            a[pos].ans = a[2*pos].ans+a[2*pos+1].ans+Math.min(c,d);
            if(c>d){a[pos].two=c-d;a[pos].five=0;}
            else {a[pos].two=0;a[pos].five=d-c;}
        }
        else{
            a[pos].set(b[s]);   
        }
    }
    static void update(int pos,int s,int e,int l,int r,Main x,int cc){
        if(r<s || e<l)return;
        if(s!=e){
            int mid=(s+e)/2;
            update(2*pos,s,mid,l,r,x,cc);
            update(2*pos+1,mid+1,e,l,r,x,cc);
            int c = a[pos*2].two+a[pos*2+1].two;
            int d = a[pos*2].five+a[pos*2+1].five;
            a[pos].ans = a[2*pos].ans+a[2*pos+1].ans+Math.min(c,d);
            if(c>d){a[pos].two=c-d;a[pos].five=0;}
            else {a[pos].two=0;a[pos].five=d-c;}
        }
        else{
            if(cc==2){                       //replaceY
                a[pos].reset();
                a[pos].set(s-l+1); 
            }
            a[pos].set(x);                //multiplyX
        }
    }
    static Main countZero(int pos,int s,int e,int l,int r){
        if(r<s || e<l)return new Main();
        if( (s==e) || (l<=s && e<=r) ){
            return a[pos];
        }
        int mid=(s+e)/2;
        Main c=countZero(2*pos,s,mid,l,r);
        Main d=countZero(2*pos+1,mid+1,e,l,r);
        c.ans+=d.ans;
        c.two+=d.two;
        c.five+=d.five;
        return c;
    }
	public static void main (String[] args) {
	    a=new Main[200002];
	    b=new int[100002];
	    Scanner sc =new Scanner(System.in);
		int t=sc.nextInt();
		for(int k=0;k<t;k++){
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    for(int i=1;i<=n;i++){
		        b[i]=sc.nextInt();
		    }
		    createTree(1,1,n);
		    int c,l,r,x;
		    long ans=0;
		    for(int i=1;i<=m;i++){
		        c=sc.nextInt();
		        l=sc.nextInt();
		        r=sc.nextInt();
		        if(c==3){
		            Main xx =countZero(1,1,n,l,r);
		            ans+=xx.ans+Math.min(xx.two,xx.five);
		        }else{
		            x=sc.nextInt();
		            Main temp =new Main();
		            temp.set(x);
		            update(1,1,n,l,r,temp,c);
		        }
		    }
		    System.out.println(ans);
		}
	}
}