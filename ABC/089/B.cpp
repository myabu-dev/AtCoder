//
// Created by Myabu on 2020/01/24.
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
    char S[110];

    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>S[i];
    }

    bool flags[] = {0,0,0,0};

    for (int i = 0; i < N; ++i) {
        switch(S[i]){
            case 'P':
                flags[0] =1;
                break;
            case 'W':
                flags[1] = 1;
                break;
            case 'G':
                flags[2] = 1;
                break;
            case 'Y':
                flags[3] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if(flags[i])count++;
    }

    if(count>3){
        cout<<"Four"<<endl;
    }else{
        cout<<"Three"<<endl;
    }



    return 0;
}