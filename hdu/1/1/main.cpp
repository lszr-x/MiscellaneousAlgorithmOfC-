//
//  main.cpp
//  1
//
//  Created by apple on 2017/8/1.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    bool flag;
    int m,n,x,y;
    
    m=1;
    while(m>0){
        cin>>n;
        if(n==0){
            return 0;
        }
        else {
            y=0;
            flag=true;
            while(n>0){
                cin>>x;
                if(x>0&&x%2==0&&flag){
                    y=y+x;
                }
                if(x<=0){
                    //n=-1;
                    flag=false;
                }
                
                n--;
            }
            cout<<y<<endl;
        }
        m++;
    }
    return 0;
}
