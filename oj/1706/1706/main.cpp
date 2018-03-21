//
//  main.cpp
//  1706
//
//  Created by apple on 2017/3/29.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void year_juedge(int n) {
    if((n%4==0&&n%100!=0)||n%400==0){
        //return 1;
        p[2]=29;
    }
    else p[2]=28;
}
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    int year,month,day,y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    //cout<<year<<month<<day<<endl;
    int y4=1461;
    //int k;
    while(t--) {
        year=y;
        month=m;
        day=d;
        int k;
        cin>>k;
        while(k--) {
            year_juedge(year);
            day++;
            if(day>p[month]){
                day-=p[month];
                month++;
            }
            if(month>12){
                month=1;
                year++;
            }
        }
        if(year>=1000){
            cout<<year<<"-";
        }
        else if(year>=100)cout<<0<<year<<"-";
        else if(year>=10)cout<<0<<0<<year<<"-";
        else cout<<0<<0<<0<<year<<"-";
        if(month>=10)cout<<month<<"-";
        else cout<<0<<month<<"-";
        if(day>=10)cout<<day<<endl;
        else cout<<0<<day<<endl;
        //cout<<
    }
    return 0;
}
