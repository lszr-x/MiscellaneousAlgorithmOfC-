//
//  main.cpp
//  1680
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n) {
        long long a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++) {
            if(a[i]!=a[i-1])cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
