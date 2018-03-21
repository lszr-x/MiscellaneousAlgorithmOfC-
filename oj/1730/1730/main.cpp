//
//  main.cpp
//  1730
//
//  Created by apple on 2017/4/29.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <stack>
#include <cstdio>
using namespace std;
bool judge(char k) {
    if(k=='('||k==')'||k=='['||k==']')return 1;
    else return 0;
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    getchar();
    while(n--) {
        string a;
        int u=0;
        //getchar();
        stack<char> s;
        getline(cin, a);
        /*for(int i=0;i<1000;i++) {
            char k;
            k=getchar();
            if(k=='\n'&&i!=0)break;
            if(k=='\n'||judge(k)){
                a[u++]=k;
            }
            
        }*/
        
        
        if(a[0]=='\n'){
            cout<<"Yes"<<endl;
        }
        else{
            bool flag=0;
            for(int i=0;i<a.length();i++) {
                if(a[i]=='['||a[i]=='(') s.push(a[i]);
                else if(!s.empty()&&s.top()=='('&&a[i]==')') s.pop();
                else if(!s.empty()&&s.top()=='['&&a[i]==']') s.pop();
                else if(judge(a[i]))flag=1;
            }
            if(s.empty()&&!flag)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
