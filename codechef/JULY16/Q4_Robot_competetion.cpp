#include<iostream>
using namespace std;
#include<cstdio>
#include<vector>
#include<cstring>

int row,colum,k1,k2;
int dis[110][110];
int dis2[110][110];
int c[110][110];
int added[110][110];

vector< pair< int , int > > v;
void solve(int p,int q,int k);
void solve2(int p,int q,int k);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&row,&colum,&k1,&k2);
        for (int i=1;i<=row;i++){
            for (int j=1;j<=colum;j++){
                scanf("%d",&c[i][j]);
                dis[i][j]=dis2[i][j]=0;
                added[i][j]=0;
            }
        }
        if(colum==1){printf("0\n");continue;}
        if(k1+k2==0){printf("-1\n");continue;}
        if(colum==2){printf("1\n");continue;}
        
        int i=1,j=1;
        v.resize(0);
        added[1][colum]=1;
        for(int x=k1;x>=0;x--){    //dis
            if( i>1  and !c[i][j]) added[i][j]=dis[i][j]=1,v.push_back(make_pair(i,j));
            for(int z=1;z<=x;z++){
                if(!c[i][j+z] and j+z<=colum)added[i][j+z]=dis[i][j+z]=1,v.push_back(make_pair(i,j+z));
            }i++;
        }//cout<<v.size()<<endl;
     
        for(int i=0;i<v.size();i++)solve(v[i].first,v[i].second,k1);
        
        memset(added,0,sizeof(added));
        i=1,j=colum;
        v.resize(0);
        added[1][colum]=1;
        for(int x=k2;x>=0;x--){   //dis2
            if( i>1  and !c[i][j]) added[i][j]=dis2[i][j]=1,v.push_back(make_pair(i,j));
            for(int z=1;z<=x;z++){
                if(!c[i][j-z] and j-z>=1)added[i][j-z]=dis2[i][j-z]=1,v.push_back(make_pair(i,j-z));
            }i++;
        }//cout<<v.size()<<endl;
        
        for(int i=0;i<v.size();i++)solve2(v[i].first,v[i].second,k2);
        
        dis2[1][colum]=dis[1][1]=0;
        int ans=-1,d;
        
        if(k1==1 and k2==1){
            if(dis[1][colum]==0)ans=-1;
            else if(dis[1][colum]<=(k1+k2))ans=1;
            else if(dis[1][colum]%(k1+k2)==0)ans=dis[1][colum]/(k1+k2);
            else ans=1+dis[1][colum]/(k1+k2);
        }else {
            ans=9999999;
            for (int i=1;i<=row;i++){   // ans calculating here
                for (int j=1;j<=colum;j++){
                    if( (j==1 or colum==j) and i==1){
                        if(dis[i][j]!=0 or dis2[i][j]!=0){
                            d=max(dis[i][j],dis2[i][j]);
                            ans=min(ans,d);
                        }continue;
                    }
                    if(!c[i][j] and dis[i][j]!=0 and dis2[i][j]!=0){
                        d=max(dis[i][j],dis2[i][j]);
                        ans=min(ans,d);
                    }
                }
            }
            if(ans==9999999)ans=-1;
        }
        printf("%d\n",ans);
        
        /*printf("dis             dis2\n");
        for(int i=1;i<=row;i++){
            for(int j=1;j<=colum;j++){    // matrix dis
                printf("%d ",dis[i][j]);        
            }printf("    ");
            for(int j=1;j<=colum;j++){    // matrix dis2
                printf("%d ",dis2[i][j]);        
            }printf("\n");    
        }*/
        /*for (int i=0;i<v.size();i++)cout<<v[i].first<<v[i].second<<" ";
        printf("added\n");
        for(int i=1;i<=row;i++){          // matrix added
            for(int j=1;j<=colum;j++){      
                printf("%d ",added[i][j]);        
            }printf("\n");    
        }*/
    }
return 0;
}
void solve(int p,int q,int k){//printf("kk %d%d ",p,q);           //do forward declaration
    int dd=dis[p][q]+1,i=p,i2=p-1,j=q;
    for(int z=1;z<=k;z++){
        if(!c[i][j+z] and j+z<=colum){
            if(dis[i][j+z]==0 or dis[i][j+z]>dd)dis[i][j+z]=dd;
            if(!added[i][j+z]){
                v.push_back(make_pair(i,j+z));
                added[i][j+z]=1;
            }
        }
        if(!c[i][j-z] and j-z>=1){
            if(dis[i][j-z]==0 or dis[i][j-z]>dd)dis[i][j-z]=dd;
            if(!added[i][j-z]){
                v.push_back(make_pair(i,j-z));
                added[i][j-z]=1;
            }
        }     
    }
    i=p+1;
    
    for(int x=k-1;x>=0;x--){
        if(i<=row){      //for itself i
            if(!c[i][j]){
                if(dis[i][j]==0 or dis[i][j]>dd)dis[i][j]=dd;
                if(!added[i][j]){
                    v.push_back(make_pair(i,j));
                    added[i][j]=1;
                }
            }
        }
        if(i2>=1){      //for itself  i2
            if(!c[i2][j]){
                if(dis[i2][j]==0 or dis[i2][j]>dd)dis[i2][j]=dd;
                if(!added[i2][j]){
                    v.push_back(make_pair(i2,j));
                    added[i2][j]=1;
                }
            }
        }
        
        for(int z=1;z<=x;z++){
            if(i<=row ){
               if(!c[i][j+z] and j+z<=colum){
                    if(dis[i][j+z]==0 or dis[i][j+z]>dd)dis[i][j+z]=dd;
                    if(!added[i][j+z]){
                        v.push_back(make_pair(i,j+z));
                        added[i][j+z]=1;
                    }
                }
            
                if(!c[i][j-z] and j-z>=1){
                    if(dis[i][j-z]==0 or dis[i][j-z]>dd)dis[i][j-z]=dd;
                    if(!added[i][j-z]){
                        v.push_back(make_pair(i,j-z));
                        added[i][j-z]=1;
                    }
                } 
            }
            if(i2>=1){
                if(!c[i2][j+z] and j+z<=colum){
                    if(dis[i2][j+z]==0 or dis[i2][j+z]>dd)dis[i2][j+z]=dd;
                    if(!added[i2][j+z]){
                        v.push_back(make_pair(i2,j+z));
                        added[i2][j+z]=1;
                    }
                }
            
                if(!c[i2][j-z] and j-z>=1){
                    if(dis[i2][j-z]==0 or dis[i2][j-z]>dd)dis[i2][j-z]=dd;
                    if(!added[i2][j-z]){
                        v.push_back(make_pair(i2,j-z));
                        added[i2][j-z]=1;
                    }
                }
            }
        }i++;i2--;
    }
}

void solve2(int p,int q,int k){           //do forward declaration
    int dd=dis2[p][q]+1,i=p,i2=p-1,j=q;
    for(int z=1;z<=k;z++){
        if(!c[i][j+z] and j+z<=colum){
            if(dis2[i][j+z]==0 or dis2[i][j+z]>dd)dis2[i][j+z]=dd;
            if(!added[i][j+z]){
                v.push_back(make_pair(i,j+z));
                added[i][j+z]=1;
            }
        }
        if(!c[i][j-z] and j-z>=1){
            if(dis2[i][j-z]==0 or dis2[i][j-z]>dd)dis2[i][j-z]=dd;
            if(!added[i][j-z]){
                v.push_back(make_pair(i,j-z));
                added[i][j-z]=1;
            }
        }     
    }
    i=p+1;
    
    for(int x=k-1;x>=0;x--){
        if(i<=row){      //for itself i
            if(!c[i][j]){
                if(dis2[i][j]==0 or dis2[i][j]>dd)dis2[i][j]=dd;
                if(!added[i][j]){
                    v.push_back(make_pair(i,j));
                    added[i][j]=1;
                }
            }
        }
        if(i2>=1){      //for itself  i2
            if(!c[i2][j]){
                if(dis2[i2][j]==0 or dis2[i2][j]>dd)dis2[i2][j]=dd;
                if(!added[i2][j]){
                    v.push_back(make_pair(i2,j));
                    added[i2][j]=1;
                }
            }
        }
        
        for(int z=1;z<=x;z++){
            if(i<=row ){
               if(!c[i][j+z] and j+z<=colum){
                    if(dis2[i][j+z]==0 or dis2[i][j+z]>dd)dis2[i][j+z]=dd;
                    if(!added[i][j+z]){
                        v.push_back(make_pair(i,j+z));
                        added[i][j+z]=1;
                    }
                }
            
                if(!c[i][j-z] and j-z>=1){
                    if(dis2[i][j-z]==0 or dis2[i][j-z]>dd)dis2[i][j-z]=dd;
                    if(!added[i][j-z]){
                        v.push_back(make_pair(i,j-z));
                        added[i][j-z]=1;
                    }
                } 
            }
            if(i2>=1){
                if(!c[i2][j+z] and j+z<=colum){
                    if(dis2[i2][j+z]==0 or dis2[i2][j+z]>dd)dis2[i2][j+z]=dd;
                    if(!added[i2][j+z]){
                        v.push_back(make_pair(i2,j+z));
                        added[i2][j+z]=1;
                    }
                }
            
                if(!c[i2][j-z] and j-z>=1){
                    if(dis2[i2][j-z]==0 or dis2[i2][j-z]>dd)dis2[i2][j-z]=dd;
                    if(!added[i2][j-z]){
                        v.push_back(make_pair(i2,j-z));
                        added[i2][j-z]=1;
                    }
                }
            }
        }i++;i2--;
    }
}
