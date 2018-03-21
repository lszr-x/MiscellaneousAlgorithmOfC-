//
//  main.cpp
//  1043
//
//  Created by apple on 2017/7/26.
//  Copyright  2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include<algorithm>
using namespace std;
#define mo 1000000007
int main()
{
    int n;
    while(cin>>n){
        int a[n],b[n],c[n*2][2];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=a[n-1]-n;
        int t=n;
        for(int i=n-1;i>=0;i--){
            if(a[i]-i-1>max){
                max=a[i]-i-1;
                t=i+1;
            }
            c[i][0]=max;
            c[i][1]=t;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            b[i]--;
        }
        sort(b,b+n);
        sum+=c[b[0]][0];
        int y=sum-n-1;
        t=n+1;
        for(int i=0;i<n;i++){
            if(c[b[i]][0]<=y)t=i;
        }
        for(int i=1;i<t;i++){
            sum+=c[b[i]][0];
            sum%=mo;
        }
        sum+=y*(n-t);
        cout<<sum<<endl;
    }
    return 0;
}

