#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

struct test {
    int num;
    double count=0;
    int total=0;
};

bool cmp(const test &x, const test &y) {
bool flag;
    if ((x.count- y.count>0.0001)||(y.count-x.count>0.001)){
        flag= x.count > y.count;
    }else if(x.total!=y.total){
        flag= x.total>y.total;
    }else {
        flag= x.num<y.num;
    }
    return flag;
}

int main() {
    int n;
    while(cin>>n){
        test a[n];
        for(int i=0;i<n;i++){
            a[i].num=i;
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
                int p1;
                double p2;
                cin>>p1>>p2;
//                cout<<p1<<" "<<p2<<" ";
                p2/=100;
                a[p1-1].count+=p2;
                a[p1-1].total++;
                a[i].count-=p2;
            }
//            cout<<endl;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            cout<<a[i].num+1<<" "<<fixed<<setprecision(2)<<a[i].count<<endl;
        }
    }

    return 0;

}
