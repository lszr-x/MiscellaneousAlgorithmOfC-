//
//  main.cpp
//  1511
//
//  Created by apple on 2017/6/7.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
const int INF=0x3f3f3f3f;
int main(int argc, const char * argv[]) {
    int m,k;
    while (cin>>m>>k) {
        int a[m+1];
        int dp[m+1];
        for(int i=1;i<=m;i++){
            cin>>a[i];
            dp[i]=INF;
        }
        
        dp[0]=0;
        a[0]=0;
        //dp[1]=a[1];
        for(int i=1;i<=m;i++) {
            //dp[i]=0;
            int j=(i-k<0)?0:(i-k);
            for(;j<i;j++) {
                dp[i]=min(dp[i],dp[j]);
            }
            dp[i]+=a[i];
        }
        cout<<dp[m]<<endl;
    }
    return 0;
}
