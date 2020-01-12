//
// Created by Myabu on 2020/01/12.
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
    int X,A,B;

    cin>>X>>A>>B;

    X -= A;

    while(true){
        if(X-B < 0){
            break;
        }
        X -= B;
    }

    cout<<X<<endl;

    return 0;
}