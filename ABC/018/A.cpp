//
// Created by Myabu on 2020/01/14.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <math.h>
#include <stack>
#include <queue>
#include <cstdio>
#include <numeric>

using namespace std;


int main(void){
    int A,B,C;
    cin>>A>>B>>C;

    if(A>B && B>C){
        cout<<1<<endl;
        cout<<2<<endl;
        cout<<3<<endl;
    }else if(A>B && C>B && A>C){
        cout<<1<<endl;
        cout<<3<<endl;
        cout<<2<<endl;
    }else if(B>A && A>C){
        cout<<2<<endl;
        cout<<1<<endl;
        cout<<3<<endl;
    }else if(B>C && C>>A && B>A){
        cout<<3<<endl;
        cout<<1<<endl;
        cout<<2<<endl;
    }else if(C>A && A>B){
        cout<<2<<endl;
        cout<<3<<endl;
        cout<<1<<endl;
    }else{
        cout<<3<<endl;
        cout<<2<<endl;
        cout<<1<<endl;
    }


    return 0;
}