//
//  main.cpp
//  1683
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    set<string> s;
    string a,b;
    char x;
    while(~scanf("%c",&x)){
        if(x=='A'){
            b.resize(1000);
            scanf("%s",&b[0]);
            if(s.count(b)){
                printf("他得奖了\n");
            }
            else printf("没有快滚\n");
        }
        if(x=='B'){
            b.resize(1000);
            scanf("%s",&b[0]);
            s.insert(b);
        }
    }
    
    
    return 0;
}
