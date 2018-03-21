//
//  main.cpp
//  1021
//
//  Created by apple on 2017/4/11.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1000005];
int main(int argc, const char * argv[]) {
    a[0]=7,a[1]=11;
    for(long long i=2;i<=1000000;i++) {
        a[i]=a[i-1]+a[i-2];
        a[i]%=3;
    }
    long long n;
    while(cin>>n){
        if(a[n]){
            cout<<"no"<<endl;
        }
        else cout<<"yes"<<endl;
    }
    return 0;
}
