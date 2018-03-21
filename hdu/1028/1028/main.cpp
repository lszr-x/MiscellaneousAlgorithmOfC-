//
//  main.cpp
//  1028
//
//  Created by apple on 2017/4/11.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int a[200][200]={0};
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n) {
        for(int i=1;i<=121;i++)a[i][1]=a[1][i]=1;
        for(int i=2;i<=121;i++){
            for(int j=2;j<=121;j++){
                if(i<j)a[i][j]=a[i][i];
                else if(i==j){
                    a[i][j]=1+a[i][j-1];
                }
                else if(i>j){
                    a[i][j]=a[i-j][j]+a[i][j-1];
                }
            }
            //cout<<a[i][i]<<endl;
        }
        cout<<a[n][n]<<endl;
    }
    return 0;
}
