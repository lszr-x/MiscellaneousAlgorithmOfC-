//
//  main.cpp
//  1709
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    a=10,b=10;
    int c=22;
    long long k=1,t=1;
    for(int i=1;i<=10;i++){
        k*=i;
    }
    for(int i=11;i<=20;i++) {
        t*=i;
    }
    cout<<t/k<<endl;
    return 0;
}
