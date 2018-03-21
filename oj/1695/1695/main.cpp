//
//  main.cpp
//  1695
//
//  Created by apple on 2017/3/22.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n) {
        int a[n];
        stack<int> s;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            s.push(a[i]);
        }
        printf("Mark.");
        for(int i=0;i<n;i++) {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}
