#include <iostream>
#include <set>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
struct tree{
    int num;
    tree *left;
    tree *right;
};
void transtree(tree *node){

    tree *tem=node->left;
    node->left=node->right;
    node->right=node->left;
    if(node->left!=NULL){
        transtree(node->left);
    }
    if(node->right!=NULL){
        transtree(node->right);
    }
}
int n;
void createTree(tree &t,int a1[n],int a2[n]){

}

int main() {
    int n;
    while(cin>>n){
        int a1[n],a2[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
    }

    return 0;

}
