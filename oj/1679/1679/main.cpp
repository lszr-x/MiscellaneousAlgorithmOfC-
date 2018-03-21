//
//  main.cpp
//  1679
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(~scanf("%d ",&n)){
        long long a;
        set<long long> s;
        for(int i=0;i<n;i++) {
            //int x;
            scanf("%lld",&a);
            s.insert(a);
        }
        int t=s.size();
        
        printf("%d\n",t);
    }
    return 0;
}
