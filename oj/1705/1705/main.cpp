//
//  main.cpp
//  1705
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    long long x[101],y[101];
    x[1]=-1,y[1]=-1;
    for(int i=2;i<=100;i++){
        bool flag=true;
        for(long long k=1;k<100;k++) {
            for(long long j=k;j<=k+8;j++) {
                if((k+j)*i==k*j){
                    x[i]=k;
                    y[i]=j;
                    flag=false;
                    break;
                }
            }
            if(!flag)break;
        }
        if(flag){
            x[i]=-1;
            y[i]=-1;
        }
        if(x[i]>=100||y[i]>=100){
            x[i]=-1;
            y[i]=-1;
        }
        if(x[i]==y[i]){
            x[i]=-1;
            y[i]=-1;
        }
    }
    while(cin>>n) {
        if(x[n]==-1&&y[n]==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<x[n]<<" "<<y[n]<<endl;
        }
    }
    return 0;
}
