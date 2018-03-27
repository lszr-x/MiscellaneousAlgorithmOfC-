#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
struct test{
    int x;
    int y1;
    int y2;
};
bool cmp1(const test &x, const test &y) {
    return x.x < y.x;
}
bool cmp2(const test &x, const test &y) {
    return x.y1 < y.y1;
}
bool cmp3(const test &x, const test &y) {
    return x.y2 > y.y2;
}
int main() {
    int k;
    cin>>k;
    string a;
    int t=0;
    while(cin>>a){
        if(t==k&&a!="End"){
            t=0;
            cout<<a<<endl;
        }else if(a=="ChuiZi"){
            cout<<"Bu"<<endl;
            t++;

        }else if(a=="JianDao"){
            cout<<"ChuiZi"<<endl;
            t++;


        }else if(a=="Bu"){
            cout<<"JianDao"<<endl;
            t++;

        }else {
            break;
        }

    }


    return 0;

}
