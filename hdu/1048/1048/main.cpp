//
//  main.cpp
//  1048
//
//  Created by apple on 2017/4/12.
//  Copyright © 2017年 apple. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    string l,b;
    char t[100];
    t['A']='V';
    t['B']='W';
    t['C']='X';
    t['D']='Y';
    t['E']='Z';
    t['F']='A';
    t['G']='B';
    t['H']='C';
    t['I']='D';
    t['J']='E';
    t['K']='F';
    t['L']='G';
    t['M']='H';
    t['N']='I';
    t['O']='J';
    t['P']='K';
    t['Q']='L';
    t['R']='M';
    t['S']='N';
    t['T']='O';
    t['U']='P';
    t['V']='Q';
    t['W']='R';
    t['X']='S';
    t['Y']='T';
    t['Z']='U';
    
    while (cin>>l) {
        if(l=="ENDOFINPUT")break;
        //cin>>b;
        char x;
        x=getchar();
        char a[10000];
        gets(a);
        cin>>b;
        for(int i=0;i<strlen(a);i++){
            if(isalpha(a[i])){
                cout<<t[a[i]];
            }
            else cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
