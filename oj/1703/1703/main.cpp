//
//  main.cpp
//  1703
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int a[13];
int m[2];
void get_num(long long b) {
    for(int i=0;i<13;i++){
        a[i]=b%2;
        b/=2;
    }
    for(int i=0;i<13;i++){
        if(a[i]==0)m[0]++;
        if(a[i]==1)m[1]++;
    }
}
int main(int argc, const char * argv[]) {
    int n=8200;
    int t=0;
    for(long long i=255;i<=n;i++){
        memset(a, 0, sizeof(a));
        memset(m, 0, sizeof(m));
        get_num(i);
        if(m[0]==5&&m[1]==8){
            int k=2;
            for(int j=0;j<13;j++){
                if(a[j]==0)k*=2;
                if(a[j]==1)k--;
                if(k<=0){
                    break;
                }
            }
            if(k==2)t++;
        }
        //else continue;
        
    }
    cout<<t<<endl;
    return 0;
}
