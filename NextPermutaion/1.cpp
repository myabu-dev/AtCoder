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
    int array[] = {1,2,3,4,5};

    do{
        for (int i = 0; i < 4; ++i) {
            cout<<array[i];
            if(i!=4)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(array, array+4));

    return  0;
}