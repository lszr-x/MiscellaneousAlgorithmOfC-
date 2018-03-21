//
//  main.cpp
//  1227
//
//  Created by apple on 2017/6/7.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    while(1){
        int a[10000];
        //cin>>a[1];
        int t=1;
        char c;
        while((c=getchar())!='\n')
        {
            if(c!=' ')//把这句判断条件改动
            {
                ungetc(c,stdin);
                cin>>a[t++];
            }  
        }
        if(a[1]){
            int x=1;
            
            t--;
            int dp[t+1];
            dp[1]=1;
            int max,maxl=1;
            for(int i=2;i<=t;i++) {
                max=0;
                for(int j=1;j<=i-1;j++) {
                    if(a[i]>a[j]&&max<dp[j]){
                        max=dp[j];
                    }
                }
                dp[i]=max+1;
                if(maxl<dp[i])maxl=dp[i];
                
            }
            cout<<maxl<<endl;
            
        }
        else break;
    }
    return 0;
}
