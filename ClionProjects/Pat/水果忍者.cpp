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
    int n;
    while(cin>>n){
        test tt[n];
        int x1,x2,y1,y2;
        for(int i=0;i<n;i++){
            cin>>tt[i].x>>tt[i].y1>>tt[i].y2;
        }
        sort(tt,tt+n,cmp2);
        x1=tt[0].x;
        y1=tt[0].y1;
        y1--;

        sort(tt,tt+n,cmp3);
        x2=tt[0].x;
        y2=tt[0].y2;
        y2++;

        double k,d;
        k=(x2-x1)*1.0/(y2-y1);
        d=y1-x1*k;
        sort(tt,tt+n,cmp1);
        int y3,y4;
        y3=tt[0].x*k+d;
        y4=tt[n-1].x*k+d;
        cout<<tt[0].x<<" "<<y3<<" "<<tt[n-1].
    }

    return 0;

}
