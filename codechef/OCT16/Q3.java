import java.io.*;
import java.util.Scanner;

class Main {
    static long ans =0;
    static boolean isNegative(char[] c){
        if(c[0]=='1' )return true;
        else return false;
    }
    static void T(char[] c){
        if(isNegative(c))return;
        ans++;
        int carry=1,d=0;
        for (int i=c.length-1;i>=0;i--){  //add and & operation
            if(carry==1 && c[i]=='1'){
                d=0;carry=1;
            }else if(carry==1 || c[i]=='1'){
                d=1;carry=0;
            }else{
                d=0;carry=0;
            }
            if(d==1 && c[i]=='1')c[i]='1';
            else c[i]='0';
        }
        if(carry==1){
            c=("00000000"+String.valueOf(c)).toCharArray();
        }
        //System.out.println(String.valueOf(c));
        carry=0;
        for (int i=c.length-1;i>=0;i--){   //minus operation
            if(i==c.length-1){
                if(c[i]=='1'){c[i]='0';break;}
                else {c[i]='1';carry=1;
                continue;}
            }
            if(carry==0)break;
            else{
                if(c[i]=='1'){
                    c[i]='0';break;
                }else if(c[i]=='0'){
                    c[i]='1';
                }
            }
        }
        T(c);
    }
    
	public static void main (String[] args) {
	   Scanner sc = new Scanner(System.in);
	   int t= sc.nextInt();
	   for(int k=0;k<t;k++){
	       String l1=sc.next();
	       String l2=sc.next();
	       String l3=sc.next();
	       long n=sc.nextInt();
	       for (int i=1;i<=n;i++){
	           l1+=l2;
	       }l1+=l3;
	       int p=0,i;
	       for (i=0;i<l1.length();i++){
	           if(l1.charAt(i)=='1')break;
	       }
	       //l1=l1.substring(i);
	       for (i=0;i<l1.length();i++){
	           if(l1.charAt(i)=='1')p++;
	       }System.out.println(l1+" "+l1.length()+" "+p);
		   
		   while(l1.length()%8!=0){
			   l1="0"+l1;
		   }//System.out.println(l1);
	       ans=0;
	       T(l1.toCharArray());
	       System.out.println(ans);
	   }
	   //System.out.println(Integer.toBinaryString(5));
	}
}

