//
// Created by Myabu on 2020/01/11.
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
    long long A,B, K;

    cin>>A>>B>>K;

//    for (int i = 0; i < K; ++i) {
//        if(A>0){
//            A--;
//        }else if(B>0){
//            B--;
//        }else{
//
//        }
//    }

    if(K-A < 0){
        A = A - K;
    }else{
        if(A>0){
            K = K - A;
            A = 0;
        }

        if(K-B < 0){
            B = B - K;
        }else{
            if(B>0){
                B = 0;
            }
        }

    }

    cout<<A<<" "<<B<<endl;


    return 0;
}