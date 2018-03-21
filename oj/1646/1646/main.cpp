//
//  main.cpp
//  1646
//
//  Created by apple on 17/3/1.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n){
        int m=n;
        int a[4];
        for(int i=0;i<4;i++){
            for(int j=2236;j>=0;j--){
                if(j*j<=m){
                    a[i]=j;
                    m-=j*j;
                    break;
                }
            }
        }
        
        cout<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
    }
    return 0;
}
