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
    char a[10005];
    while(gets(a)){
        string s1="",s2="";
        for(int i=0;i<strlen(a);i++){
            if(a[i]==' '){
                for(int j=0;j<i;j++){
                    s1+=a[j];
                }
                for(int j=i+1;j<strlen(a);j++){
                    s2+=a[j];
                }
                break;
            }
        }
        bool f1=true,f2=true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]<'0'||s1[i]>'9'){
                f1=false;
                break;
            }
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]<'0'||s2[i]>'9'){
                f2=false;
                break;
            }
        }
        if(f1&&f2){
            cout<<s1<<" + "<<s2<<" = ";
            int a=stoi(s1);
            int b=stoi(s2);
            cout<<a+b<<endl;

        }else if(f1){

            cout<<s1<<" + ? = ?"<<endl;

        }else if(f2){
            cout<<"? + "<<s1<<" = ?"<<endl;


        } else{
            cout<<"? + ? = ?"<<endl;
        }
    }

    return 0;

}
