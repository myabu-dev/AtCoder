//
// Created by Myabu on 2020/01/05.
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
    char array[5] = {'a', 'c', 'b', 'r', 'e'};
    vector<int> P = { 0, 1, 2, 3, 4 };
    do {
        for (int i = 0; i < 5; ++i) {
            cout<<array[P[i]]<<" ";
        }
        cout<<endl;
    } while (next_permutation(P.begin(), P.end()));


    return 0;
}