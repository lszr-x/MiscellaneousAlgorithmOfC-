//
//  main.cpp
//  1009
//
//  Created by apple on 2017/5/1.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
struct trade{
    int j,f;
    float a;
};
int main(int argc, const char * argv[]) {
    int m,n;
    while(cin>>m>>n&&n!=-1&&m!=-1) {
        trade tr[n];
        for(int i=0;i<n;i++) {
            cin>>tr[i].j>>tr[i].f;
            tr[i].a=tr[i].j/tr[i].f;
        }
        sort(&tr[0].a, &tr[n].a);
        for(int i=0;i<=n;i++){
            cout<<tr[i].j<<" "<<tr[i].f<<endl;
        }
    }
    return 0;
}
