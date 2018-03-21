//
//  main.cpp
//  1726
//
//  Created by apple on 2017/4/29.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char a[10][10];
int maxn=-10000;
int num=0;
int n,k;
int t=0;
int visit[20];
void dfs(int r){
    if(t==k){
        num++;
        return;
    }
    else{
        for(int i=r;i<n;i++) {
            for(int j=0;j<n;j++){
                if(a[i][j]=='#'&&!visit[j]){
                    t++;
                    visit[j]=1;
                    dfs(i+1);
                    visit[j]=0;
                    t--;
                }
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    //int n,k;
    while(~scanf("%d %d%*c",&n,&k) && n!=-1 && k!=-1) {
        num=0,t=0;
        memset(a, 0, sizeof(a));
        memset(visit, 0, sizeof(visit));
        for(int i=0;i<n;i++) {
            gets(a[i]);
        }
        dfs(0);
        printf("%d\n",num);
    }
    return 0;
}

