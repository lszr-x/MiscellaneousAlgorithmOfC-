//
//  main.cpp
//  1007
//
//  Created by apple on 2017/3/26.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>


using namespace std;
#define k 1000000;
int a[1000000],a1[1000000],a2[1000000];
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n&&n) {
        for(int i=0;i<n;i++) {
            cin>>a1[i]>>a2[i];
            a[i]=a1[i]+a2[i];
        }
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(a[i]>a[j]){
                    int tm;
                    tm=a1[i];
                    a1[i]=a1[j];
                    a1[j]=tm;
                    
                    tm=a2[i];
                    a2[i]=a2[j];
                    a2[j]=tm;
                }
            }
        }
        float x;
        x=(a1[0]-a1[1])*(a1[0]-a1[1])+(a2[0]-a2[1])*(a2[0]-a2[1]);
        if(x!=0)
        cout<<fixed<<setprecision(2)<<sqrt(x)/2.0<<endl;
        else cout<<0<<"."<<0<<0<<endl;
    }
    return 0;
}
