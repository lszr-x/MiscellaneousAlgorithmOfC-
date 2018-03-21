//
//  main.cpp
//  1676
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    string a,b;
    while(cin>>a>>b){
        if(a==b)cout<<-1<<endl;
        else if(a.length()>b.length())cout<<a.length()<<endl;
        else if(a.length()<b.length())cout<<b.length()<<endl;
        else if(a.length()==b.length())cout<<b.length()<<endl;
    }
    return 0;
}
