//
//  main.cpp
//  1308
//
//  Created by apple on 2017/8/6.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double a,b;
    int c;
    while(cin>>a>>b>>c){
        int x=a/b;
        double t=a/b;
        cout<<x;
        cout<<".";
        t-=x;
        for(int i=0;i<c;i++){
            t*=10;
        }
        x=t*10;
        if(x%10>=5){
            t++;
        }
        int y=t;
        cout<<y<<endl;
    }
    return 0;
}
