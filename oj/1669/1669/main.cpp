//
//  main.cpp
//  1669
//
//  Created by apple on 2017/3/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long long n,x;
    while(cin>>n>>x){
        int a[3]={0,0,0};
        a[x]=1;
        for(int i=n;i>0;i--){
            if(i%2==0){
                int tmp;
                tmp=a[1];
                a[1]=a[2];
                a[2]=tmp;
            }
            else{
                int tmp;
                tmp=a[0];
                a[0]=a[1];
                a[1]=tmp;
            }
        }
        for(int i=0;i<3;i++){
            if(a[i]!=0)cout<<i<<endl;
        }
    }
    return 0;
}
