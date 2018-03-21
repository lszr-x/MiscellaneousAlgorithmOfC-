//
//  main.cpp
//  1666
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n){
        int a[n];
        int b[n];
        //int c1[n],c2[n],c3[n],c4[n],c5[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int x=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==b[i])continue;
            else if(a[i]!=b[i]){
                if(a[i+1]!=b[i+1]){
                    x++;
                    i++;
                }
                else{
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
        else cout<<x<<endl;
    }
    return 0;
}
