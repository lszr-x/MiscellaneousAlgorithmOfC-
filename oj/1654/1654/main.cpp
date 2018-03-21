//
//  main.cpp
//  1654
//
//  Created by apple on 2017/3/5.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n){
        int a[n];
        int t=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                for(int j=i+1;j<n;j++){
                    if(a[j]==i+1)
                    {
                        int tmp=a[i];
                        a[i]=a[j];
                        a[j]=tmp;
                        t++;
                    }
                }
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
