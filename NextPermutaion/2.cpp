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
    vector<int> v =  {1,2,3,4};
    do{
        for(int i=0; i<4; i++){
            cout<<v[i];
            if(i!=3)cout<<" ";
        }
        cout<<endl;
    }while(prev_permutation(v.begin(),v.end()));
    return 0;
}