#include <iostream>
#include <set>
#include <iomanip>

using namespace std;

struct test {
    double a;
    double b;
    double c;
};

bool operator<(const test &x, const test &y) {
    return x.c > y.c;
}

int main() {
    string s;
    while(cin>>s){
        int a=0,b=0;
        a=(s[0]-'0')*10+s[1]-'0';
        b=(s[3]-'0')*10+s[4]-'0';
        if((a<12&&a>=0)||(a==12&&b==0)){
            if(a>=10){
                if(b>=10){
                    printf("Only %d:%d.  Too early to Dang.",a,b);
                    cout<<endl;

                }
                else{
                    printf("Only %d:0%d.  Too early to Dang.",a,b);
                    cout<<endl;

                }
            }else{
                if(b>=10){
                    printf("Only 0%d:%d.  Too early to Dang.",a,b);
                    cout<<endl;

                }
                else{
                    printf("Only 0%d:0%d.  Too early to Dang.",a,b);
                    cout<<endl;

                }
            }
        }else{
            if(b>0){
                a++;
            }
            for(int i=0;i<a-12;i++){
                cout<<"Dang";
            }
            cout<<endl;
        }
    }

    return 0;

}
