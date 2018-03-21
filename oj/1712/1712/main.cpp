//
//  main.cpp
//  1712
//
//  Created by apple on 2017/3/30.
//  Copyright © 2017年 apple. All rights reserved.
//

/*#include <iostream>
#include <cstring>
using namespace std;
int in=0;
int fg[3][4];//={{-100,0,3,5},{2,4,6,8},{7,9,1,-100}};
//int r=3, c=4;
//int visit[3][4];
//int rx,ry;
int cnt=0;
//int k[3][4]={{-100,1,3,5},{4,6,7,8},{2,0,9}};
bool judge(void){
    for(int x=0;x<3;x++){
        for(int y=0;y<4;y++) {
            for(int i=-1;i<=1;i++) {
                for(int j=-1;j<=1;j++) {
                    if(((x+i)>=0&&(x+i)<=2)&&((y+j)>=0&&(y+j)<=3))
                    if(abs(fg[x][y]-fg[x+i][y+j])==1){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int vj[10];
void dfs(int r,int c) {
    //fg[0][0]=-100,fg[2][3]=-100;
    if(r==2&&c==3){
        if(judge()){
            for(int i=0;i<3;i++) {
                for(int j=0;j<4;j++) {
                    cout<<fg[i][j]<<" ";
                }
            }
            cout<<endl;
            cnt++;
        }
    }
    else{
        for(int i=0;i<10;i++) {
            int j;
            for(j=0;j<in;j++) {
                if(vj[j]==i) {
                    break;
                }
            }
            if(j==in) {
                fg[r][c]=i;
                vj[in++]=i;
                if(c<3){
                    dfs(r, c+1);
                }
                else{
                    if(r<2){
                        dfs(r+1, 0);
                    }
                }
                in--;
            }
        }
    }
    
}

int main(int argc, const char * argv[]) {
    memset(fg, 0, sizeof(fg));
    memset(vj, 0, sizeof(vj));
    fg[0][0]=-100,fg[2][3]=-100;
    dfs(0, 1);
    cout<<cnt<<endl;
    /*if(judge()){
        cout<<1<<endl;
    }
    else cout<<0<<endl;
    return 0;
}*/
//#include<bits/stdc++.h>
/*#include <iostream>
#include <cstring>
using namespace std;
int a[6][10],b[20]={0};
int num=0;//记总数
bool  judge(void){
    for(int x=1;x<=3;x++){
        for(int y=1;y<=4;y++) {
            for(int i=-1;i<=1;i++) {
                for(int j=-1;j<=1;j++) {
                    if(((x+i)>0&&(x+i)<=3)&&((y+j)>0&&(y+j)<=4))
                        if(abs(a[x][y]-a[x+i][y+j])==1){
                            return false;
                        }
                }
            }
        }
    }
    return true;
}
void dfs(int r,int step)
{
    if(r==3&&step==4)
    {
        //if(judge())
        for(int i=1;i<=3;i++) {
            for(int j=1;j<=4;j++) {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
        num++;
        return;
    }
    for(int i=0;i<=9;i++)
    {
        if(b[i]==0)//表示这个数未使用过
        {
            a[r][step]=i;
            if(abs(a[r][step]-a[r][step-1])==1)//判断左边是否合乎条件
                continue;
            if(abs(a[r][step]-a[r][step+1])==1)//右边
                continue;
            if(abs(a[r][step]-a[r+1][step])==1)//下面
                continue;
            if(abs(a[r][step]-a[r-1][step])==1)//上面
                continue;
            if(abs(a[r][step]-a[r+1][step-1])==1)//下左
                continue;
            if(abs(a[r][step]-a[r+1][step+1])==1)//下右
                continue;
            if(abs(a[r][step]-a[r-1][step-1])==1)//上左
                continue;
            if(abs(a[r][step]-a[r-1][step+1])==1)//上右
                continue;
            b[i]=1;//做标记
            if(step==4)//换行
                dfs(r+1,1);
            else dfs(r,step+1);
            b[i]=0;//解除标记 
            a[r][step]=-10;//回归原数 
        }
    }
}
int main()
{
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++)
            a[i][j]=-10;
    dfs(1,2);
    cout<<num<<endl;
    return 0;
}*/

