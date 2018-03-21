//
//  main.cpp
//  1306
//
//  Created by apple on 2017/8/6.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    double pi=0;
    for(long long i=1;i<10000000000;i++){
        if(i*2-1>1000000)break;
        if(i%2!=0){
            pi+=1.0/(i*2-1);
        }
        else pi-=1.0/(i*2-1);
    }
    cout<<fixed<<setprecision(9)<<pi<<endl;
    return 0;
}
