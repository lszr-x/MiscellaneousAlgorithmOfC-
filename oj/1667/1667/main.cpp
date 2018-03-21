//
//  main.cpp
//  1667
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;

int get_sum(long long n){
    for(int i=0;i<100;i++){
        if(n==0){
            return i;
        }
        n=n/10;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    long long n;
    int k;
    while(cin>>n>>k){
        long long k1=1;
        for(int i=0;i<k;i++){
            k1*=10;
        }
        int x=1;
        int y=get_sum(n);
        if(k1>n){
            bool flag=false;
            for(int i=0;i<9;i++){
                x=n%10;
                n/=10;
                if(x==0)flag=true;
                if(n==0){
                    x=i+1;
                    break;
                }
            }
            if(flag){
                cout<<x-1<<endl;
            }
        }
        else if(y==k+1){
            int x=1;
            bool flag=true;
            for(int i=0;i<y-1;i++){
                x=n%10;
                n=n/10;
                if(x!=0){
                    flag=false;
                    cout<<y-1<<endl;
                    break;
                }
            }
            if(flag){
                cout<<0<<endl;
            }
        }
        else {
            int x;
            int t=0;
            for(int i=0;i<y-1;i++){
                x=n%10;
                n/=10;
                if(x!=0)t++;
            }
            if(y-t<k)cout<<y-1<<endl;
            if(y-t>=k)cout<<t<<endl;
        }
    }
    return 0;
}
