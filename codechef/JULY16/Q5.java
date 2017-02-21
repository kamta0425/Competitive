import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

class Main{
    static int []x=new int[10005];
    static void print(long ans){System.out.println(ans);}
    ///vector<int> v;  
    ///set<int> s[1005][1005];
    
    public static void main(String...str){
        Scanner sc=new Scanner(System.in);
        Set<Integer>[] s1= new HashSet<Integer>[10];     
        int t=sc.nextInt();
        for(int z=1;z<=t;z++){
            long ans=0;
            int n=sc.nextInt();
            for(int i=1;i<=n;i++)x[i]=sc.nextInt();
            if(n==1){print(0);continue;}
            if(n==2){if(x[1]==x[2])print(0);else print(1);continue;}
            
            for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
              /*s[i][j].clear();
              if(i!=j)s[i][j]=s[i][j-1];
              s[i][j].insert(x[j]);*/
            }}
            for(int a=1;a<n;a++){
            for (int b=a;b<n;b++){
                int count=0;
                for (int c=b+1;c<=n;c++){
                    /*v.resize(0);
                    s1.clear();
                    s1.insert(x[c]);
                    set_intersection(s[a][b].begin(), s[a][b].end(), s1.begin(), s1.end(),back_inserter(v));
                    if(v.size()==0)count++;
                    else{
                        ans+=((count*(count+1))/2);
                        count=0;
                    }*/
                }
                if(count!=0)ans+=((count*(count+1))/2);
            }}
            print(ans);
            /*for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
              printf("%d%d=> ",i,j);
              for(set<int>::iterator k=s[i][j].begin();k!=s[i][j].end();k++)printf("%d ",*k);
              printf("\n");
            }
            }*/
        }
    }
}