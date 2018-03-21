//
//  main.cpp
//  1707
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<fixed<<setprecision(3)<<0.1*(0.2*0.3+0.8*0.5)/3.0+0.3*(0.4*0.1+0.6*0.5)/3.0+0.5*(0.7*0.1+0.3*0.3)/3.0<<endl;
    return 0;
}
