//
//  main.cpp
//  1677
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n){
        string home;
        cin>>home;
        string f1[105],f2[105];
        for(int i=0;i<n;i++){
            char a[8];
            cin>>a;
            f1[i]={a[0],a[1],a[2]};
            f2[i]={a[5],a[6],a[7]};
        }
        int t1=0,t2=0;
        for(int i=0;i<n;i++){
            if(f1[i]==home)t1++;
            if(f2[i]==home)t2++;
        }
        if(t1==t2)cout<<"home"<<endl;
        else cout<<"contest"<<endl;
    }
    return 0;
}
