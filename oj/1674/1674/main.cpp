//
//  main.cpp
//  1674
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    /*int n,k,x;
    while(cin>>n>>k>>x){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            sort(a,a+n);
            for(int j=0;j<n;){
                a[j]=a[j]^k;
                j=j+2;
            }
        }
        sort(a,a+n);
        cout<<a[n-1]<<" "<<a[0]<<endl;
    }*/
    int a=5;
    int b=2;
    cout<<(a^b)<<endl;
    return 0;
}
