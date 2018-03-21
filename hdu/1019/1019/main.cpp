//
//  main.cpp
//  1019
//
//  Created by apple on 2017/4/9.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
long long gcd(long long a,long long b){
    if(a<b){
        long long t=a;
        a=b;
        b=t;
    }
    if(b==0){
        return a;
    }
    else return gcd(b, a%b);
}
long long ngcd(long long *a,long long n) {
    if(n==1)return *a;
    return gcd(a[n-1], ngcd(a, n-1));
}

long long lcm(long long a,long long b){
    return (a*b)/gcd(a, b);
}
long long nlcm(long long *a,long long n){
    if(n==1)return *a;
    else return lcm(a[n-1], nlcm(a, n-1));
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    while(n--) {
        long long k;
        cin>>k;
        long long a[k];
        for(long long i=0;i<k;i++)cin>>a[i];
        cout<<nlcm(a, k)<<endl;
    }
    return 0;
}
