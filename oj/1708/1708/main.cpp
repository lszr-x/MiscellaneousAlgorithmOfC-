//
//  main.cpp
//  1708
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int re(int n) {
    int a[7];
    int i;
    for(i=0;i<7;i++){
        if(n==0)break;
        a[i]=n%10;
        n/=10;
    }
    int t=1;
    
    
    for(int j=i-1;j>=0;j--) {
        n+=a[j]*t;
        t*=10;
    }
    return n;
}
void output(int n) {
    int a[7];
    int i;
    for(i=0;i<7;i++){
        if(n==0)break;
        a[i]=n%10;
        n/=10;
    }
    set<int> s;
    for(int j=0;j<i;j++) {
        s.insert(a[j]);
    }
    if(s.size()==5){
        cout<<a[i-1];
        for(int j=i-2;j>=0;j--){
            cout<<" "<<a[j];
        }
        cout<<endl;
    }
    
}
int main(int argc, const char * argv[]) {
    for(int i=10234;i<=98765;i++) {
        for(int j=1;j<10;j++){
            if(i*j==re(i)){
                output(i);
                break;
            }
        }
    }
    //cout<<re(12345)<<endl;
    //cout<<endl;
    return 0;
}
