//
//  main.cpp
//  1037
//
//  Created by apple on 2017/4/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[3];
    while (cin>>a[0]>>a[1]>>a[2]) {
        sort(a, a+3);
        bool flag=true;
        for(int i=0;i<3;i++){
            if(a[i]<=168){
                flag=false;
                cout<<"CRASH "<<a[i]<<endl;
                break;
            }
        }
        if(flag)cout<<"NO CRASH"<<endl;
    }
    return 0;
}
