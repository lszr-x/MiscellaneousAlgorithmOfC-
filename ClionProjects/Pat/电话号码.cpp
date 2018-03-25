#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    string a;
    while(cin>>a){
        char arr[11];
        for(int i=0;i<a.length();i++){
            arr[i]=a[i];
        }
        sort(arr,arr+11);
        int t=0;
        for(int i=1;i<11;i++){
            if(arr[i]==arr[i-1]){
                arr[i-1]=0;
                t++;
            }
        }
        sort(arr,arr+11);
        char ar[11-t];
        int j=0;
        for(int i=10;i>=t;i--){
            ar[j++]=arr[i];
        }
        cout<<"int[] arr = new int[]{";
        for(int i=0;i<11-t;i++){
            if(i!=10-t)
            cout<<ar[i]<<",";
            else
                cout<<ar[i]<<"};"<<endl;
        }
        int index[11];
        for(int i=0;i<11;i++){
            for(int k=0;k<11-t;k++){
                if(ar[k]==a[i]){
                    index[i]=k;
                    break;
                }
            }
        }
        cout<<"int[] index = new int[]{";
        for(int i=0;i<11;i++){
            if(i!=10)
                cout<<index[i]<<",";
            else
                cout<<index[i]<<"};"<<endl;
        }

    }

    return 0;

}
