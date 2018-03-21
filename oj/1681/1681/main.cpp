//
//  main.cpp
//  1681
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    string name;
    name.resize(1000);
    set<string> s;
    while(~scanf("%d %s",&n,&name[0])) {
        string t1;
        t1.resize(1000);
        bool flag=true;
        for(int i=0;i<n;i++){
            scanf("%s",&t1[0]);
            s.insert(t1);
            if(t1==name){
                printf("YES\n");
                flag=false;
            }
        }
        if(flag){
            printf("NO\n");
        }
    }
    return 0;
}
