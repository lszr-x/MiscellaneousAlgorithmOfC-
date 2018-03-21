#include <iostream>

using namespace std;

int main()
{
    int a[10000];
    int x;
    int p=0;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=10000;i++){
        x=i;
        p=i;
        for(int j=1;j>0;j++){
            if(x<3)break;
            p+=x/3;
            x=x%3+x/3;
        }
        a[i]=p;
    }
    int n;
    while(cin>>n){
        cout<<a[n]<<endl;
    }
    return 0;
}
