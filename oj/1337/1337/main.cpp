//
//  main.cpp
//  1337
//
//  Created by apple on 2017/8/4.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
bool judge(int x){
    if(x%4==0&&x%400!=0){
        return true;
    }
    else return false;
}
int main(int argc, const char * argv[]) {
    int n;
    int t1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int a=1777,b=4,c=30;
    n=8113;
    while(n--){
            t1[2]=28;
            c++;
            if(judge(a)){
                t1[2]=29;
            }
            if(t1[b]<c){
                b++;
                c=1;
            }
            if(b==13){
                a++;
                b=1;
            }
            
        }
        c--;
        if(b>=10&&c>=10)
            cout<<a<<"-"<<b<<'-'<<c<<endl;
        else if(c>=10)cout<<a<<"-"<<0<<b<<'-'<<c<<endl;
        else cout<<a<<"-"<<0<<b<<'-'<<0<<c<<endl;
    return 0;
}
