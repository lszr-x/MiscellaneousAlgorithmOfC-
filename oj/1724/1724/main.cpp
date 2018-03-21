//
//  main.cpp
//  1724
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--) {
        int m,n;
        cin>>n>>m;
        queue<int> q;
        int k=0;
        int a[n];
        for(int i=0;i<n;i++) {
            //int a;
            cin>>a[i];
            q.push(a[i]);
        }
        int x=0;
        for(int i=1;i>0;i++) {
            if(a[m]==0){
                cout<<x<<endl;
                break;
            }
            bool flag=true;
            for(int j=0;j<n;j++) {
                if(q.front()<a[j]){
                    flag=false;
                    break;
                }
            }
            if(flag) {
                a[k]=0;
                q.pop();
                x++;
            }
            else{
                int b;
                b=q.front();
                q.push(b);
                q.pop();
            }
            bool flag2=true;
            for(int i=k+1;i<n;i++){
                if(a[i]){
                    k=i;
                    flag2=false;
                    break;
                }
            }
            if(flag2) {
                for(int i=0;i<k;i++){
                    if(a[i]){
                        k=i;
                        //flag2=false;
                        break;
                    }
                }
            }
            
            
        }
        
    }
    return 0;
}
