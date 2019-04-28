#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <math.h>
#include <stack>
#include <queue>

using namespace std;


int main(void){
    int A,B,C;

    cin>>A>>B>>C;

    int ans;

    ans = (int)B/A;

    if(ans>C){
        cout<<C<<endl;
    }else{
        cout<<ans<<endl;
    }



    return 0;
}