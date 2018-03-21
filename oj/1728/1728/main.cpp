//
//  main.cpp
//  1728
//
//  Created by apple on 2017/4/29.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100][100];
int m,n;
int length=11110,lt=0;
int k;
int t=0;
int y=0;
int visit[100][100];
void dfs(int r,int l){
    if(k<t){
        return;
    }
    if(r==m&&l==n){
        length=lt;
        
        return;
    }
    else{
        for(int i=r;i<=m;i++) {
            for(int j=l;j<=n;j++) {
                for(int p=-1;p<=1;p++) {
                    for(int q=-1;q<=1;q++) {
                        if(!a[i+p][j+q]&&(p==0||q==0)&&(i+p)>=1&&(i+p)<=m&&(j+q)>=1&&(j+q)<=n&&!visit[i+p][j+q]){
                            lt++;
                            visit[i+p][j+q]=1;
                            dfs(i+p, j+q);
                            t=0;
                            visit[i+p][j+q]=0;
                            lt--;
                        }
                        if(a[i+p][j+q]&&(p==0||q==0)&&(i+p)>=1&&(i+p)<=m&&(j+q)>=1&&(j+q)<=n&&!visit[i+p][j+q]){
                            lt++;
                            visit[i+p][j+q]=1;
                            t++;
                            dfs(i+p, j+q);
                            t--;
                            visit[i+p][j+q]=0;
                            lt--;
                        }
                    }
                }
                
            }
        }
    }
    
}
int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while(t--) {
        length=11110;
        t=0;
        cin>>m>>n;
        cin>>k;
        memset(visit, 0, sizeof(visit));
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        //r=1,l=1;
        dfs(1,1);
        cout<<length<<endl;
        
    }
    
    return 0;
}
