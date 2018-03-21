//
//  main.cpp
//  1014
//
//  Created by apple on 2017/3/27.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int steb,mod;
    while(cin>>steb>>mod) {
        set<int> s;
        s.insert(0);
        int a=0;
        for(int i=1;i>=0;i++) {
            a+=steb;
            a%=mod;
            if(s.count(a))break;
            s.insert(a);
        }
        if(s.size()==mod){
            printf("%10d%10d    Good Choice\n\n",steb,mod);
        }
        else {
            printf("%10d%10d    Bad Choice\n\n",steb,mod);
        }
    }
    return 0;
}
