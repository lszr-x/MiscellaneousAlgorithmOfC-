//
//  main.cpp
//  1719
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include<queue>
using namespace std;
queue<int> q;
int x;
int t=0;
void operate(){
    if(t==0) {
        cout<<" "<<1;
        q.pop();
        int c=q.front();
        q.pop();
        q.push(c);
        t++;
    }
    else {
        int p=q.front();
        cout<<", "<<p;
        q.pop();
        int c=q.front();
        q.pop();
        q.push(c);
        t++;
    }
    
}
int main(int argc, const char * argv[]) {
    int n;
    while(cin>>n&&n) {
        t=0;
        if(n==1) {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;
        }
        else {
            for(int i=0;i<n;i++){
                q.push(i+1);
            }
            cout<<"Discarded cards:";
            for(int i=1;i>0;i++) {
                operate();
                if(q.size()==1)break;
            }
            cout<<endl;
            cout<<"Remaining card: "<<q.front()<<endl;
        }
        if(!q.empty())q.pop();
    }
    return 0;
}
