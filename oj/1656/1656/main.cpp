//
//  main.cpp
//  1656
//
//  Created by apple on 2017/3/5.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
long long a[1000001];
int main(int argc, const char * argv[]) {
    long long n;
    while(~scanf("%lld",&n)){
        a[2]=2;
        int max;
        for(int i=2;i<=n;i++){
            int x=i;
            max=i;
            for(int j=1;j>0;j++){
                if(x%2==0)x/=2;
                else x=x*3+1;
                if(x>max)max=x;
                if(x==2)break;
            }
            a[i]=max;
        }
    
    
        long long max2=0;
        for(long long i=2;i<=n;i++){
            if(a[i]>max2)max2=a[i];
        }
        printf("%lld\n",max2);
    }
    return 0;
}

