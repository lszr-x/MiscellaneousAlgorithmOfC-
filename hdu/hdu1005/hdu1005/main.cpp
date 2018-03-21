//
//  main.cpp
//  hdu1005
//
//  Created by apple on 2017/3/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int a,b;
    while(cin>>a>>b>>n){
        if(a&&b&&n){
        int c[1000];
        c[1]=1,c[2]=1;
        int t,k;
        bool flag=false;
        for(int i=3;i<1000;i++) {
            c[i]=(a*c[i-1]+b*c[i-2])%7;
            for(int j=1;j<i-1;j++){
                if(c[i]==c[j+1]&&c[i-1]==c[j]){
                    t=j;
                    k=i-j-1;
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }
        if(n<=t){
            cout<<c[n]<<endl;
        }
        else if(n<=t+k){
            cout<<c[n]<<endl;
        }
        else {
            n-=t;
            n%=k;
            n+=t;
            cout<<c[n]<<endl;
        }
    }
        else break;
        
    }
    return 0;
}
