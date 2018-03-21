//
//  main.cpp
//  1687
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    map<string, int> p;
    while (~scanf("%d",&n)) {
        string na;
        for(int i=0;i<n;i++) {
            cin>>na;
            p[na]++;
        }
        for(map<string,int>::iterator it=p.begin();it!=p.end();it++){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}
