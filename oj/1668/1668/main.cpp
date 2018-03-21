//
//  main.cpp
//  1668
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    long long n,k;
    while(cin>>n>>k){
        long long a1[n];
        long long a2[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
        long long b[n];
        for(int i=0;i<n;i++){
            b[i]=a1[i]-a2[i];
        }
        int t=0,sum=0;
        for(int i=0;i<n;i++){
            if(b[i]<=0){
                t++;
                sum-=b[i];
            }
        }
        long long y=0;
        for(int i=0;i<n;i++){
            y+=a1[i];
        }
        long long x=0;
        
        if(t>=k){
            for(int i=0;i<n;i++){
                if(a1[i]<=a2[i])x+=a1[i];
                else x+=a2[i];
            }
            cout<<x<<endl;
            
        }
        else {
            sort(b,b+n);
            for(int i=0;i<k;i++){
                x+=b[i];
            }
            int zx=0;
            for(int i=0;i<n;i++){
                zx+=b[i];
            }
            cout<<y-(zx-x)<<endl;
        }
    }
    return 0;
}
