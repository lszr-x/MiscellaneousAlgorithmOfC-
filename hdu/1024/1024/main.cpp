//
//  main.cpp
//  1024
//
//  Created by apple on 2017/4/2.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m,n;
    while(cin>>m>>n) {
        int a[n+1];
        int dp[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        int mmax[n+1];
        memset(mmax, 0, sizeof(mmax));
        memset(dp, 0, sizeof(dp));
        //、、int m=-10000;
        for(int i=1;i<=m;i++) {
           // m=-19999;
            for(int j=i;j<=n;j++) {
                dp[j]=max(dp[j-1]+a[j], mmax[j-1]+a[j]);
                mmax[j]=dp[j];
            }
        }
        cout<<mmax[n]<<endl;
    }
    return 0;
}
