//
// Created by yuu on 2019-06-30.
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

int gcd(int a, int b) {
    if (a%b == 0)
        return b;

    return gcd(b, a % b);
}

//int lcm(int a, int b) {
//    return a * b / gcd(a, b);
//}
//
//
//long long c_lcm(long a, long b){
//    long long x = a *b;
//    long long tmp, r;
//    if(a<b){
//        tmp = a;
//        a = b;
//        b = tmp;
//    }
//
//    r = a % b;
//    while(r!=0){
//        a = b;
//        b = r;
//        r = a % b;
//    }
//
//    return x/b;
//}


int A[100010];
int main(void){
    int N;
    cin>>N;

    for (int i = 0; i < N; ++i) {
        cin>>A[i];
    }

//    sort(A,A+N);

//    int min = A[0];
//    if(min>lcm(A[0], A[1])){
//        min = lcm(A[0], A[1]);
//    }
    int temp = A[0];
    for (int i = 1; i < N; ++i) {
        temp = gcd(temp,A[i]);
//        cout<<A[i]<<endl;
//        if(min>temp && temp > 0){
//            min =  temp;
//        }
    }

    cout<<temp<<endl;
    return 0;
}