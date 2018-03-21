#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int m,n,w;
    while(cin>>w>>m>>n){
        int m1,n1;
        int m2,n2;
        if(m%w==0)m1=m/w;
        else m1=m/w+1;
        if(n%w==0)n1=n/w;
        else n1=n/w+1;

        if(m1%2==0){
            if(m%w==0)m2=1;
            else m2=w-m%w+1;
        }
        else if(m%w==0)m2=w;
        else m2=m%w;
        if(n1%2==0){
            if(n%w==0)n2=1;
            else n2=w-n%w+1;
        }
        else if(n%w==0)n2=w;
        else n2=n%w;

        cout<<abs(m1-n1)+abs(m2-n2)<<endl;

        /*if(n%w==0||m%w==0){
            if(n%w==0)cout<<abs(n1-m1)+n1%2
            if(m%w==0)
        }
        else if(n1%2==0&&m1%2==0)||(n1%2!=0&&m1%2!=0){
            cout<<abs(m1-n1)+abs(m%w-n%w)<<endl;
        }
        else if()
            cout<<abs(m1-n1)+abs(m%w-n%w)<<endl;*/

    }
    return 0;
}
