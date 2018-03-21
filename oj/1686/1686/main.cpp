//
//  main.cpp
//  1686
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(~scanf("%d",&n)){
        set<string> s;
        for(int i=0;i<n;i++) {
            string a;
            a.resize(1000);
            scanf("%s",&a[0]);
            s.insert(a);
        }
        int t=s.size();
        printf("%d\n",t);
    }
    return 0;
}
