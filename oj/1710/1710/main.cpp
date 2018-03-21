//
//  main.cpp
//  1710
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--) {
        long long x,y;
        cin>>x>>y;
        long long xt=x;
        long long a=0;
        int i=0;
        while(i != 120)
        {
            i++;
            if(i % 2 == 1)
            {
                y -= x;
                if(y < 0)
                    break;
            }
            if(i % 6 == 0)
            {
                x = x * 2;
            }
            if(i % 4 == 0)
            {
                y = 2 * y;
            }
            
            //cout << "i: " << i << " x: " << x << " y: " << y << endl;
        }
        if(y>=0)cout<<y<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
