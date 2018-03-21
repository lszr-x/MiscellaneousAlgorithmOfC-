//
//  main.cpp
//  1704
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    int k[31];
    k[0]=1;
    k[1]=3;
    k[2]=5;
    int n=4;
    int q=5;
    for(int i=3;i<31;i++){
        k[i]=n+q;
        q+=n;
        n*=2;
    }
    while(t--) {
        int a;
        cin>>a;
        cout<<k[a]<<endl;
    }
    return 0;
}
