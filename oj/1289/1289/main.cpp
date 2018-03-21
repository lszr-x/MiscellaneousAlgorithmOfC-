//
//  main.cpp
//  1289
//
//  Created by apple on 2017/8/4.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int maze[200][200],cnt;
int a,b,c,d;
int n,m;
void dfs(int i,int j)
{
    if(i==n&&j==m){
        cnt++;
        return;
    }
    if(maze[i][j]||i>n||j>m)
        return ;
    dfs(i+1,j);
    dfs(i,j+1);
    return ;
}

int main()
{
    while(cin>>n>>m>>c>>d){
        memset(maze,0,sizeof(maze));
        cnt=0;
        //a+=2,b+=2,c+=2,d+=2;
        maze[c][d]=1;
        maze[c-2][d+1]=maze[c-2][d-1]=1;
        maze[c-1][d+2]=maze[c-1][d-2]=1;
        maze[c+1][d+2]=maze[c+1][d-2]=1;
        maze[c+2][d+1]=maze[c+2][d-1]=1;
        dfs(0,0);
        cout<<cnt<<endl;
    }
    return 0;
}
