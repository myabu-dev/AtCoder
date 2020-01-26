//
// Created by Myabu on 2020/01/26.
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
#include <iomanip>

using namespace std;


int main(void){
    int A,P;

    cin>>A>>P;

    int app = 0;

    app += P + 3*A;

    cout<<app/2<<endl;


    return 0;
}