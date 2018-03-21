//
//  main.cpp
//  1628
//
//  Created by apple on 2017/6/7.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,k;
    int a[300][300];
    a[1][1]=1;
    for (int i=1; i<=200; i++) {
        a[i][1]=1;
    }
    for(int i=2;i<=200;i++){
        for (int j=2; j<=i; j++) {
            a[i][j]=a[i-j][j]+a[i-1][j-1];
        }
    }
    while(cin>>n>>k) {
        cout<<a[n][k]<<endl;
    }
    return 0;
}
