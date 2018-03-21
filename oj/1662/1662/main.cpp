//
//  main.cpp
//  1662
//
//  Created by apple on 2017/3/10.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int b[100000];
int change(int * a,int n){
    memset(b, 0, sizeof(b));
    int x=0;
    int k=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            b[x]=k;
            x++;
            b[x]=a[i];
            x++;
            k=1;
        }
        else{
            k++;
        }
    }
    for(int i=0;i<100000;i++){
        a[i]=b[i];
    }
    int y=0;
    for(int i=0;i<100000;i++){
        if(a[i]==0){
            y=i;
            break;
        }
    }
    return y;
}


int main() {
    char a[1000];
    while(cin>>a){
        int a1[100000];
        int n=0;
        for(int i=0;i<1000;i++){
            if(a[i]=='\0'){
                n=i;
                break;
            }
            a1[i]=a[i]-'0';
        }
        int x;
        cin>>x;
        //change(a1, n);
        for(int i=0;i<x;i++){
            n=change(a1, n);
        }
        for(int i=0;i<n;i++){
            cout<<a1[i];
        }
        cout<<endl;
    }
    return 0;
}
