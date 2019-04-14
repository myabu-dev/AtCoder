//
// Created by yuu on 2019-04-14.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <math.h>

using namespace std;


int main(void){
    char s;
    cin>>s;
    char ans;
    switch(s){
        case 'A':
            ans='T';
            break;
        case 'T':
            ans='A';
            break;
        case 'C':
            ans='G';
            break;
        case 'G':
            ans='C';
            break;
    }

    cout<<ans<<endl;


    return 0;
}