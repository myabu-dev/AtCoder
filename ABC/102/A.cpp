//
// Created by Myabu on 2020/01/17.
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
int gcd(int a, int b) {
    if (a%b == 0)
        return b;

    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main(void){
    int N;
    cin>>N;


    cout<<lcm(N,2)<<endl;



    return 0;
}