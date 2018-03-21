//
//  main.cpp
//  1720
//
//  Created by apple on 2017/4/15.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
using namespace std;
typedef pair<int,int> point;
//int a[100005]={0},b[100005]={0};
int main(int argc, const char * argv[]) {
    int k;
    
    //&&(n-1-j)==i
    //while(cin>>k)
    cin>>k;
    while (k--) {
        long long n;
        cin>>n;
            int sum=0;
            set<point> s;
            for(int i=0;i<n;i++) {
                int a,b;
                cin>>a>>b;
                sum+=a;
                s.insert(point(a*n,b));
            }
            bool flag=true;
            for(set<point>::iterator it=s.begin();it!=s.end();it++){
                //cout<<it->first<<" "<<it->second<<endl;
                point p=*it;
                if(s.find(point(2*sum-p.first,p.second))==s.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        
    }
    return 0;
}
