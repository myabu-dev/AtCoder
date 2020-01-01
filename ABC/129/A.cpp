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

using namespace std;


int main(void){
    int X[3];

    cin>>X[0]>>X[1]>>X[2];

    sort(X, X+3 );

    cout<<X[0]+X[1]<<endl;


    return 0;
}