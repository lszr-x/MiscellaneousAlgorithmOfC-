//
//  main.cpp
//  1678
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int k;
    while(cin>>k){
        int a,b;
        cin>>a>>b;
        int a1=a/k,b1=b/k;
        int a2=a%k,b2=b%k;
        if(a1==0){
            if(b1==0)cout<<-1<<endl;
            else if(b2==0)cout<<b1<<endl;
            else cout<<-1<<endl;
        }
        else if(b1==0){
            if(a1==0)cout<<-1<<endl;
            else if(a2==0)cout<<a1<<endl;
            else cout<<-1<<endl;
        }
        else {
            cout<<a1+b1<<endl;
        }
        
    }
    return 0;
}
