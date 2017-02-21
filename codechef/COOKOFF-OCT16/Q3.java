import java.util.Scanner;

class Main{
    
    public static void main(String[] agrs){
        
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int e=0;e<t;e++){
            
        String s1=sc.next();
        String s2=sc.next();
        int n=s1.length();
        int m=s2.length();
        int l1,l2,r1,r2;
        long ans=999999,x=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s1.charAt(i)==s2.charAt(j)){
                    l1=i;l2=j;
                    r1=(n-i-1);r2=m-j-1;
                    x=Math.abs(l1-r2)+Math.abs(l1-l2)+Math.abs(l2-r1)+Math.abs(r2-r1);
                    if(x<ans)ans=x;
                }
            }
        }
        
        System.out.println(ans);
    }
    
    }
}