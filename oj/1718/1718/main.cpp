//
//  main.cpp
//  1718
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n&&n) {
        multimap<int, int> m1,m2;
        for(int i=0;i<n;i++) {
            int a,b;
            cin>>a>>b;
            m1.insert(pair<int, int>(a,b));
        }
        bool flag=true;
        for(multimap<int, int>::iterator it=m1.begin();it!=m1.end();it++) {
            flag=true;
            for(multimap<int, int>::iterator it2=m1.begin();it2!=m1.end();it2++){
                if(it->first==it2->second&&it->second==it2->first){
                    flag=false;
                }
            }
            if(flag){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
