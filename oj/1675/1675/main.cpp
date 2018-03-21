//
//  main.cpp
//  1675
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int t1=1,t2=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1])t1++;
            else break;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]==a[i+1])t2++;
            else break;
        }
        if(t1+t2==n)cout<<0<<endl;
        else cout<<n-t1-t2<<endl;
    }
    return 0;
}
