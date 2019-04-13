//
// Created by yuu on 2019-04-13.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>

using namespace std;


int main(void){
    int A,B;
    cin>>A>>B;
    int result;
    if(A-B>=2){
        result = A + A -1;
    }
    else if(B-A>=2){
        result = B + B -1;
    }else{
        result = A + B;
    }

    cout<<result<<endl;


    return 0;
}