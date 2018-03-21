//
//  main.cpp
//  1684
//
//  Created by apple on 2017/3/20.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    set<int> s1;
    set<int> s2;
    set<int> s3;
    
    int n1,n2;
    while(~scanf("%d",&n1)) {
        int a[n1];
        for(int i=0;i<n1;i++) {
            scanf("%d",&a[i]);
            s1.insert(a[i]);
        }
        scanf("%d",&n2);
        int b[n2];
        for(int i=0;i<n2;i++)
        {
            scanf("%d",&b[i]);
            s2.insert(b[i]);
        }
        //s3.size(s1.size()+s2.size());
        
        
        
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
        for(set<int>::iterator it1=s3.begin();it1!=s3.end();it1++){
            printf("%d ",*it1);
        }
        printf("\n");
        s3.clear();
        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
        for(set<int>::iterator it1=s3.begin();it1!=s3.end();it1++){
            printf("%d ",*it1);
        }
        printf("\n");
        s3.clear();
        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()) );
        for(set<int>::iterator it1=s3.begin();it1!=s3.end();it1++){
            printf("%d ",*it1);
        }
        printf("\n");
        s3.clear();
        set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
        for(set<int>::iterator it1=s3.begin();it1!=s3.end();it1++){
            printf("%d ",*it1);
        }
        printf("\n");
        s3.clear();
    }
    
    return 0;
}
