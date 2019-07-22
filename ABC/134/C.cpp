//
// Created by yuu on 2019-07-22.
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

using namespace std;

int A[200010];
vector<int> a_copy;

int main(void){
    int N;
    cin>>N;


    for (int i = 0; i < N; ++i) {
        int a;
        cin>>a;
        A[i] = a;
        a_copy.push_back(a);
    }

    sort(a_copy.begin(), a_copy.end(),std::greater<int>());

    if(a_copy[0]==a_copy[1]){
        for (int i = 0; i < N; ++i) {
            cout<<a_copy[0]<<endl;
        }
        return 0;
    }else{
        int max_index;
        int max_temp = -1;

        for (int i = 0; i < N; ++i) {
            if(max_temp<A[i]){
                max_temp = A[i];
                max_index = i;
            }
        }

        for (int i = 0; i < N; ++i) {
            if(i == max_index){
                cout<<a_copy[1]<<endl;
            }else{
                cout<<a_copy[0]<<endl;
            }
        }

        return 0;

    }


    return 0;
}