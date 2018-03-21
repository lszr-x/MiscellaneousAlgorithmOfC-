//
//  main.cpp
//  1013
//
//  Created by apple on 2017/3/27.
//  Copyright © 2017年 apple. All rights reserved.
//

/*#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    char s[1000];
    while(scanf("%s",s))
    {
        if(s[0]=='0') break;
        int sum=0;
        for(int i=0;s[i]!='\0';i++)
        {
            sum+=s[i]-'0';
            if(sum>9)sum=sum%10+sum/10;
        }
        cout<<sum<<endl;
    }
}*/
#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    char s[1000];
    while(scanf("%s",s))
    {
        if(s[0]=='0') break;
        int sum=0;
        for(int i=0;s[i];i++)
        {
            sum+=s[i]-'0';
            //if(sum>9)sum=sum%10+sum/10;
        }
        cout<<(sum-1)%9+1<<endl;
    }
}
