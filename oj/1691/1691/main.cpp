//
//  main.cpp
//  1691
//
//  Created by apple on 2017/3/22.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (cin>>n) {
        int a[n+1][n+1];
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i==1)a[i][j]=1;
                if(j==1)a[i][j]=1;
                //if(i==j)a[i][j]=1;
            }
        }
        for(int i=2;i<=n;i++) {
            for(int j=2;j<i;j++) {
                a[i][j]=a[i-1][j-1]+j*a[i-1][j];
            }
            a[i][i]=1;
        }
        long long x=0;
        for(int i=1;i<=n;i++) {
            x+=a[n][i];
        }
        cout<<x<<endl;
    }
    return 0;
}
