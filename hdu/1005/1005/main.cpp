//
//  main.cpp
//  1005
//
//  Created by apple on 2017/3/27.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n&&n) {
        int a[n+1];
        int t=0;
        a[0]=0;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++) {
            if(a[i]>a[i-1]){
                t+=(a[i]-a[i-1])*6;
                t+=5;
            }
            else {
                t+=(a[i-1]-a[i])*4;
                t+=5;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
