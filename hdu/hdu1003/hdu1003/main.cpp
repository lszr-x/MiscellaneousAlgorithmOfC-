//
//  main.cpp
//  hdu1003
//
//  Created by apple on 2017/3/14.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        int a[100002];
        int dp[100002];
        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        for(int j=0;j<k;j++)cin>>a[j];
        dp[0]=a[0];
        int begin,end;
        for(int j=1;j<k;j++){
            if(dp[j-1]>=0)dp[j]+=dp[j-1]+a[j];
            else dp[j]=a[j];
        }
        int max=dp[0];
        begin=0;
        for(int j=1;j<k;j++){
            if(max<dp[j]){
                max=dp[j];
                end=j;
            }
        }
        int t=0;
        begin=end;
        for(int j=end;j>=0;j--){
            t+=a[j];
            if(t==max){
                begin=j;
            }
        }
        printf("Case %d:\n",i);
        printf("%d %d %d\n",max,begin+1,end+1);
        if(i!=n)cout<<endl;
        //cout<<max<<endl;
        
    }
    return 0;
}
