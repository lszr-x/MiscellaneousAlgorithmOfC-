//
//  main.cpp
//  1721
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int b[100000][15];
int main(int argc, const char * argv[]) {
    int k;
    cin>>k;
    while(k--) {
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool h=true;
        bool flag=true;
        for(int i=1;i>0&&flag;i++){
            //h=true;
            bool flag2=true;
            if(i==1){
                flag2=true;
                for(int j=0;j<n;j++) {
                    if(j==n-1){
                        b[i][j]=abs(a[n-1]-a[0]);
                        if(b[i][j])flag2=false;
                    }
                    else{
                        b[i][j]=abs(a[j]-a[j+1]);
                        if(b[i][j])flag2=false;
                    }
                }
                if(flag2){
                    cout<<"ZERO"<<endl;
                    break;
                }
            }
            else{
                flag2=true;
                for(int j=0;j<n;j++) {
                    if(j==n-1){
                        b[i][j]=abs(b[i-1][n-1]-b[i-1][0]);
                        if(b[i][j])flag2=false;
                    }
                    else{
                        b[i][j]=abs(b[i-1][j]-b[i-1][j+1]);
                        if(b[i][j])flag2=false;
                    }
                }
                if(flag2){
                    cout<<"ZERO"<<endl;
                    break;
                }
            }
            if(flag2){
                cout<<"ZERO"<<endl;
                break;
            }
            for(int j=1;j<i;j++){
                h=true;
                for(int u=0;u<n;u++) {
                    if(b[j][u]!=b[i][u]){
                        h=false;
                        break;
                    }
                }
                if(h) {
                    cout<<"LOOP"<<endl;
                    flag=false;
                    break;
                }
                
            }
            //h=true;
        }
        
    }
    return 0;
}
