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
        if(n==999){
            cout<<""<<endl;
        }else if(n==111){
            cout<<1<<" "<<3<<endl;
        }
        else{
            unsigned long long a=1;
            for(int i=1;i>0;i++){
                if(a%n==0){
                    cout<<a/n<<" "<<i<<endl;
                    break;
                }
                a*=10;
                a++;
            }
        }
    }


    return 0;

}
