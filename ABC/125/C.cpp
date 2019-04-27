//
// Created by yuu on 2019-04-27.
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
#include <limits>
#include <numeric>
#include <type_traits>


using namespace std;

int A[100100];

int ans[100100];


int gcd( int m, int n )
{
    // 引数に０がある場合は０を返す
    if ( ( 0 == m ) || ( 0 == n ) )
        return 0;

    // ユークリッドの方法
    while( m != n )
    {
        if ( m > n ) m = m - n;
        else         n = n - m;
    }
    return m;
}//gcd

int min_a;
int aaa;

int main(void){
    int N;
    cin>>N;

    for (int i = 0; i < N; ++i) {
        cin>>A[i];
    }
int temp;

    for (int i = 0; i < N; ++i) {
        if(i==0){
            aaa = A[i];
            min_a = gcd(A[i], A[i+1]);
            continue;
        }
        temp = gcd(aaa, A[i]);
        if(aaa>temp){
            if(min_a>=temp){
                min_a = temp;
                continue;
            }
            aaa = temp;
        }
    }

    cout<<aaa<<endl;
    return 0;
}