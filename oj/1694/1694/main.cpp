//
//  main.cpp
//  1694
//
//  Created by apple on 2017/3/22.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstdio>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(~scanf("%d",&n)){
        set<string> s;
        set<string> ss;
        map<string , int> sss;
        //int k=0;
        for(int i=1;i<=n;i++) {
            int num;
            cin>>num;
            for(int i=0;i<num;i++) {
                string x;
                cin>>x;
                sss[x]++;
                s.insert(x);
            }
            //k++;
        }
        int y;
        scanf("%d",&y);
        string x[10000];
        for(int i=0;i<y;i++) {
            cin>>x[i];
            if(!s.count(x[i]))
            ss.insert(x[i]);
        }
        for(set<string>::iterator it=s.begin();it!=s.end();it++) {
            int i=0;
            if(sss[*it]<=1){
                for(i=0;i<n;i++) {
                    if(*it==x[i])break;
                }
                if(i>=n)ss.insert(*it);
            }
        }
        if(!ss.empty()){
            set<string>::iterator it=ss.begin();
            
            for(;it!=ss.end();it++) {
                cout<<*it<<" ";
            }
            printf("\n");
        }
        else cout<<"NO ONE IS HANDSOME"<<endl;
    }
    

    return 0;
}
