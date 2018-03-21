//
//  main.cpp
//  1685
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    while(n--) {
        int t;
        scanf("%d",&t);
        multiset<long long> s;
        for(int i=0;i<t;i++) {
            long long y;
            scanf("%lld",&y);
            s.insert(y);
        }
        long long sum=0,a,b;
        while(s.size()!=1) {
            a=*s.begin();
            s.erase(s.begin());
            b=*s.begin();
            s.erase(s.begin());
            sum+=a+b;
            s.insert(a+b);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
