//
//  main.cpp
//  1002-dashu
//
//  Created by apple on 2017/3/14.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int q=1;
    int o=n;
    while(n--){
        char a0[1003],b0[1003];
        cin>>a0;
        cin>>b0;
        int a[1003],b[1003];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int j=strlen(a0);
        int x=0;
        for(int i=j-1;i>=0;i--){
                a[x++]=a0[i]-'0';
        }
        int k=strlen(b0);
        x=0;
        for(int i=k-1;i>=0;i--){
                b[x++]=b0[i]-'0';
        }
        int c[1003];
        memset(c, 0, sizeof(c));
        for(int i=0;i<1002;i++){
            c[i]+=a[i]+b[i];
            if(c[i]>=10){
                c[i+1]+=1;
                c[i]-=10;
            }
        }
        int i;
        for(i=1002;i>=0;i--){
            if(c[i]!=0)break;
        }
        printf("Case %d:\n",q);
        printf("%s + %s = ",a0,b0);
        if(i==-1)cout<<0;
        else
        for(int j=i;j>=0;j--){
            cout<<c[j];
        }
        cout<<endl;
        
        if(q!=o)cout<<endl;
        q++;
    }
    
    
    
    return 0;
}
