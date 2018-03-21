//
//  main.cpp
//  1671
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int get_sum(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n){
        int a[n+1];
        int b[n+1];
        for(int i=1;i<=n;i++){
            a[i]=i+1;
        }
        for(int i=1;i<=n;i++){
            if(get_sum(i+1))b[i]=1;
            else if(!get_sum(i+1))b[i]=2;
        }
        cout<<2<<endl;
        for(int i=1;i<=n;i++){
            cout<<b[i]<<" ";
        }
    }
    return 0;
}
