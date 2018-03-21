//
//  main.cpp
//  1029
//
//  Created by apple on 2017/4/2.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(~scanf("%d",&n)) {
        //map<int, int> ma;
        int a[n];
        for(int i=0;i<n;i++){
            //int a;
            scanf("%d",&a[i]);
            //ma[a]++;
        }
        sort(a, a+n);
        printf("%d\n",a[(n+1)/2]);
        
    }
    return 0;
}
