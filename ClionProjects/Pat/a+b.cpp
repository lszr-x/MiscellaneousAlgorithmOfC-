#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    string s1,s2;
    while(cin>>s1>>s2){
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
