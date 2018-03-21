//
//  main.cpp
//  1682
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
    string nam;
    nam.resize(1000);
    while(~scanf("%d %s",&n,&nam[0])){
        set<string> s;
        //bool flag=false;
        for(int i=0;i<n;i++) {
            string t;
            t.resize(1000);
            scanf("%s",&t[0]);
            s.insert(t);
            
        }
        if(s.count(nam)) {
            s.erase(nam);
            for(set<string>::iterator it=s.begin();it!=s.end();it++) {
                printf("%s ",it->c_str());
            }
            printf("\n");
        }
        else printf("song\n");
    }
    return 0;
}
