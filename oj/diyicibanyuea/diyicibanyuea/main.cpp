//
//  main.cpp
//  diyicibanyuea
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
map<string, bool> m;
string k[100005];
int n=0;
int main(int argc, const char * argv[]) {
    m.clear();
    std::ios::sync_with_stdio(false);
    n=0;
    while(cin>>k[n]){
        m[k[n]]=1;
        n++;
    }
    string a,b;
    for(int i=0;i<n;i++) {
        for(int j=0;j<k[i].size()-1;j++) {
            a=k[i].substr(0,j+1);
            if(!m[a])continue;
            b=k[i].substr(j+1);
            if(!m[b])continue;
            cout<<k[i]<<endl;
            break;
            
        }
    }
    
    return 0;
}
