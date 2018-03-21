//
//  main.cpp
//  1688
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n) {
        map<string,int> q;
        for(int i=0;i<n;i++) {
            string a;
            cin>>a;
            q[a]=1;
        }
        string k;
        cin>>k;
        if(q[k])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
