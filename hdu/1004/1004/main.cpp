//
//  main.cpp
//  1004
//
//  Created by apple on 2017/3/27.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n&&n) {
        //string st[10000];
        map<string, int > s;
        for(int i=0;i<n;i++) {
            string t;
            cin>>t;
            s[t]++;
        }
        int max=0;
        string mas;
        for(map<string,int>::iterator it=s.begin();it!=s.end();it++) {
            if(it->second>max){
                max=it->second;
                mas=it->first;
            }
        }
        cout<<mas<<endl;
    }
    return 0;
}
