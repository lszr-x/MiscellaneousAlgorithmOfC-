//
//  main.cpp
//  1732
//
//  Created by apple on 2017/4/29.
//  Copyright © 2017年 lszr-x. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
char a[100][100];
struct tree{
    char father;
    tree *left;
    tree *right;
};
tree *creat(string pre,string in){
    tree *t=NULL;
    if(pre.length()>0) {
        t=new tree();
        t->father=pre[0];
        char id=in.find(pre[0]);
        t->left=creat(pre.substr(1,id), in.substr(0,id));
        t->right=creat(pre.substr(id+1), in.substr(id+1));
    }
    return t;
}
void post(tree *node){
    if(node){
        post(node->left);
        post(node->right);
        cout<<node->father;
    }
    else return;
}
int main(int argc, const char * argv[]) {
    string pre,in;
    while(cin>>pre>>in){
        tree *node=creat(pre, in);
        post(node);
        cout<<endl;
    }
    return 0;
}
