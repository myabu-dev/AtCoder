//
// Created by Myabu on 2020/01/07.
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
    string n;
    cin>>n;

    for (int i = 0; i < n.length(); ++i) {
        if(n[i] == '1'){
            n[i] = '9';
        }else{
            n[i] = '1';
        }
    }


    cout<<n<<endl;


    return 0;
}