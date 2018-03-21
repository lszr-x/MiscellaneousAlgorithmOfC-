//
//  main.cpp
//  1690
//
//  Created by apple on 2017/3/24.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cctype>
using namespace std;
char b[1000000];
int main(int argc, const char * argv[]) {
    char a;
    //char b[10000];
    int i=0;
    while((a=getchar())!=EOF){
        b[i]=a;
        i++;
    }
    set<string> s;
    string st="";
    for(int j=0;j<i;j++) {
        if(isalpha(b[j])){
            if(b[j]>='A'&&b[j]<='Z'){
                b[j]+=32;
            }
            for(;j<i;j++){
                if(!isalpha(b[j])){
                    s.insert(st);
                    st="";
                    break;
                }
                else if(b[j]>='A'&&b[j]<='Z'){
                    b[j]+=32;
                    st+=b[j];
                }
                else st+=b[j];
            }
        }
    }
    for(set<string>::iterator it=s.begin();it!=s.end();it++) {
        cout<<*it<<endl;
    }
    return 0;
}
