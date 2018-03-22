#include <iostream>
#include <set>
#include <iomanip>
struct test{
    double a;
    double b;
    double c;
};
bool operator<(const test & x,const test & y)
{
    return x.c>y.c;
}
using namespace std;
int main(){
//    cout<<75*1.0/18<<endl;
//    cout<<72*1.0/15<<endl;
//    cout<<45*1.0/10<<endl;

    int n;
    int d;
    n=0;
    d=0;
    while(cin>>n>>d){
        double a[n];
        double b[n];
        double c[n];
        test tt[n];
        set<test> ss;
        double price=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tt[i].a=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            tt[i].b=b[i];
            c[i]=b[i]*1.0/a[i];
            tt[i].c=c[i];
        }
        for(int i=0;i<n;i++){
            ss.insert(tt[i]);
        }
        for(set<test>::iterator it=ss.begin();it!=ss.end();it++){
            if(it.operator*().a<=d){
                d-=it.operator*().a;
                price+=it.operator*().b;
            } else {
                price+=d*it.operator*().c;
                break;
            }
        }
        cout<<fixed<<setprecision(2)<<price<<endl;


    }

    return 0;

}
