//
// Created by yuu on 2019-05-13.
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

class person{
    double height = 10;

public:
    double weight = 20;

    void test(){
        cout<<height<<endl;
    }

};

int main(void){

    person test;
    test->weight = 10;


    return 0;
}