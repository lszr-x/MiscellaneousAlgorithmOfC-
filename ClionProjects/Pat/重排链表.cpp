#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
struct test{
    string add;
    int num;
    string next;
};
bool cmp1(const test &x, const test &y) {

    return x.num<y.num;
}

bool cmp2(const test &x, const test &y) {

    return x.num>y.num;
}

int main() {
    int n;
    int top;
    while(cin>>top>>n){
        test tt[n];
        test tt2[n];
        for(int i=0;i<n;i++){
            cin>>tt[i].add>>tt[i].num>>tt[i].next;
            tt2[i].add=tt[i].add;
            tt2[i].num=tt[i].num;
            tt2[i].next=tt[i].next;
        }
        sort(tt,tt+n,cmp1);
        sort(tt2,tt2+n,cmp2);
        for(int i=0;i<n/2;i++){

            tt2[i].next=tt[i].add;
            tt[i].next=tt2[i+1].add;



            if(i==n/2||i==(n/2-1)){
                cout<<tt2[i].add<<" "<<tt2[i].num<<" "<<tt2[i].next<<endl;
                cout<<tt[i].add<<" "<<tt[i].num<<" "<<-1<<endl;
            }else{
                cout<<tt2[i].add<<" "<<tt2[i].num<<" "<<tt2[i].next<<endl;
                cout<<tt[i].add<<" "<<tt[i].num<<" "<<tt[i].next<<endl;
            }
        }
//        for(int i=0s;i<n;i++){

//        }
    }
    return 0;

}
