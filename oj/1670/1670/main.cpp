//
//  main.cpp
//  1670
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    string a1,b1;
    while(cin>>a1>>b1){
        cin>>n;
        string x,y,x1,y1;
        cout<<a1<<" "<<b1<<endl;
        for(int i=0;i<n;i++){
            cin>>x1>>y1;
            if(x1==a1){
                a1=y1;
            }
            if(x1==b1){
                b1=y1;
            }
            cout<<a1<<" "<<b1<<endl;
        }
    }
    return 0;
}
