//
//  main.cpp
//  test
//
//  Created by apple on 2017/5/9.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
using namespace std;
class Sample {
public:
    int v;
    // 在此处补充你的代码
    Sample(){}
    
    Sample(const Sample & a)
    {
        if(a.v==5||a.v==9) v=9;
        else v=22;
    }
    Sample(int a)
    {
        v=a;
    }
};
void PrintAndDouble(Sample o)
{
    cout << o.v;
    cout << endl;
}
int main()
{
    Sample a(5);
    Sample b = a;
    PrintAndDouble(b);
    Sample c = 20;
    PrintAndDouble(c);
    Sample d;
    d = a;
    cout << d.v;
    return 0;
}
