//
//  main.cpp
//  1040
//
//  Created by apple on 2017/4/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int k;
    cin>>k;
    while (k--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        cout<<a[0];
        for(int i=1;i<n;i++)cout<<" "<<a[i];
        cout<<endl;
    }
    return 0;
}
