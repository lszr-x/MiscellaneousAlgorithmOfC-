//
//  main.cpp
//  1032
//
//  Created by apple on 2017/4/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
//int a[1000005]={0};
int main(int argc, const char * argv[]) {
    int n,m;
    
    while(cin>>n>>m) {
        cout<<n<<" "<<m<<" ";
        if(n>m){
            int tm=n;
            n=m;
            m=tm;
        }
        int max=0;
        for(int i=n;i<=m;i++) {
            int j=i;
            int t=1;
            for(;;){
                if(j==1){
                    //cout<<t<<endl;
                    //a[i]=t;
                    if(t>max)max=t;
                    break;
                }
                else if(j%2==0){
                    j/=2;
                    t++;
                }
                else{
                    j=j*3+1;
                    t++;
                }
            }
            
        }
        /*for(int i=n;i<=m;i++){
            if(max<a[i])max=a[i];
        }*/
        cout<<max<<endl;
    }
    return 0;
}
