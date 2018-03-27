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
    cin>>n;
    while(n--){
        int book[10005];
        char a[100];
        for(int i=1;i>0;i++){
            gets(a);
            if(a[0]=='0'){


                break;
            }else{
                book[a[0]-'0']=
            }

        }
    }

    return 0;

}
