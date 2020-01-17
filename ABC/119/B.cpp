//
// Created by Myabu on 2020/01/18.
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
    int N;
    double ans = 0;

    cin>>N;

    for (int i = 0; i < N; ++i) {
        double X;
        string U;
        cin>>X>>U;

        if(U == "JPY"){
            ans += X;
        }else{
            ans += X * 380000;
        }
    }

    std::cout<<std::fixed<<std::setprecision(8);
    cout<<ans<<endl;



    return 0;
}