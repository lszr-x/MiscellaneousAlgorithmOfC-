#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
struct test{
    string name;
    int count;
    int k;
};
bool cmp1(const test &x, const test &y) {

    if(x.count != y.count){
        return x.count > y.count;
    }else{
        return x.k<y.k;
    }
}

int main() {
    int n;
    while(cin>>n){
        if(n==1){
            string a;
            cin>>a;
            cout<<a<<" - -"<<endl;
        }else{

            test tt[n];
            set <int> a[n];
            int k[n];
            string name[n];
            for(int i=0;i<n;i++){
                cin>>name[i];
                cin>>k[i];
                for(int j=0;j<k[i];j++){
                    int y;
                    cin>>y;
                    a[i].insert(y);
                }
                tt[i].name=name[i];
                tt[i].count=a[i].size();
                tt[i].k=k[i];
            }
            sort(tt,tt+n,cmp1);
            for(int i=0;i<3;i++){
                if(i!=2)
                    cout<<tt[i].name<<" ";
                else cout<<tt[i].name<<endl;
            }
        }



    }
    return 0;

}
