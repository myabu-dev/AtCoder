//
// Created by yuu on 2019-04-27.
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

using namespace std;


int main(void){
    int A,B,T;
    cin>>A>>B>>T;
    int temp;
    temp = (int)T/A;

    cout<<B*temp<<endl;
    return 0;
}