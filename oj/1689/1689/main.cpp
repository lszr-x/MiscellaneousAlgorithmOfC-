//
//  main.cpp
//  1689
//
//  Created by apple on 2017/3/22.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    while(~scanf("%d %d",&n,&m)) {
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        stack<int> s;
        //int k=1;
        bool flag=true;
        int t=1;
        string y="";
        int j=0;
        
        while(1) {
            if(s.size()>=m){
                flag=false;
                printf("震惊！昨天小汤河火车站竟然。。。\n");
                break;
            }
            if(t==n+1)break;
            if(a[j]==t){
                s.push(t);
                //printf("push\n");
                y+="push\n";
                s.pop();
                //printf("pop\n");
                y+="pop\n";
                t++;
                j++;
            }
            else if(!s.empty()&&a[j]==s.top()){
                s.pop();
                //printf("pop\n");
                y+="pop\n";
                j++;
                //continue;
            }
            else if(a[j]!=t){
                    s.push(t);
                    //printf("push\n");
                    y+="push\n";
                    t++;
                }
        }
        bool f=true;
        if(flag){
            //printf("%s",y.c_str());
            while(!s.empty()) {
                //s.pop();
                if(a[j]!=s.top()){
                    printf("震惊！昨天小汤河火车站竟然。。。\n");
                    f=false;
                    break;
                }
                else y+="pop\n";
                //printf("pop\n");
            }
            
        }
        if(f&&flag) {
            printf("%s",y.c_str());
        }
    }
    return 0;
}
