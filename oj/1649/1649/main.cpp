//
//  main.cpp
//  1649
//
//  Created by apple on 17/3/1.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int m,n;
    while(cin>>m>>n){
        int x;
        x=m+n-1;
        for(int i=0;i<n;i++){
            int a=(n-1)/2-abs((n-1)/2-i);
            int b=x-a*2;
            int c=x-m*2-a*2;
            if((x-a*2)<=(m*2)){
                for(int j=0;j<a;j++)cout<<".";
                for(int j=0;j<b;j++)cout<<"*";
                for(int j=0;j<a;j++)cout<<".";
            }
            else{
                for(int j=0;j<a;j++)cout<<".";
                for(int j=0;j<m;j++)cout<<"*";
                for(int j=0;j<c;j++)cout<<".";
                for(int j=0;j<m;j++)cout<<"*";
                for(int j=0;j<a;j++)cout<<".";
            }
            cout<<endl;
        }
        
        
    }
    return 0;
}
