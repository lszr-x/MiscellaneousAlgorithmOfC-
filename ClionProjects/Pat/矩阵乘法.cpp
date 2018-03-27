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

    int n1,m1,n2,m2;
    cin>>n1>>m1;
    int a1[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a1[i][j];
        }
    }
    cin>>n2>>m2;
    int a2[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>a2[i][j];
        }
    }

    if(m1==n2){
        int c[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                int o=0;
                for(int k=0;k<m1;k++){

                        o+=a1[i][k]*a2[k][j];

                }
                c[i][j]=o;
            }
        }

        cout<<n1<<" "<<m2<<endl;
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                if(j!=m2-1){

                    cout<<c[i][j]<<" ";
                }else{
                    cout<<c[i][j];
                }
            }
            cout<<endl;
        }



    }else{
        cout<<"Error: "<<m1<<" != "<<n2<<endl;
    }


    return 0;

}
