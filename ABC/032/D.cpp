//
// Created by yuu on 2019-04-23.
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

using namespace std;

long long dp[210][1100] = {};

int v[210];
int w[210];

struct nap{
    int v;
    int w;
};

vector<nap> bagA;
vector<nap> bagB;

nap data[210];

int binary_search(int key){
    int left=0, right = (int)bagB.size();
    while(right >= left){
        int mid = left + (right - left) / 2; // 区間の真ん中
        if (bagB[mid].w == key) return mid;
        else if (bagB[mid].w > key) right = mid - 1;
        else if (bagB[mid].w < key) left = mid + 1;
    }
    return -1;
}

int main(void){
    int N,W;

    int max_w = 0;
    int max_v = 0;

    cin>>N>>W;

    for (int i = 0; i < N; ++i) {
        cin>>data[i].v>>data[i].w;
        if(data[i].v>max_v){
            max_v = data[i].v;
        }
        if(data[i].w>max_w){
            max_w = data[i].w;
        }
    }

    if(N<=30){
        sort(data, data+210, [](const nap& a, const nap& b){
            return a.v < b.v;
        });

        vector<nap>A;
        vector<nap>B;



        vector<nap>temp;

        for (int i = 0; i < N; ++i) {
            if(i%2==0){
                A.push_back(data[i]);
            }else{
                B.push_back(data[i]);
            }
        }

        for (int bit = 0; bit < (1<<A.size()); ++bit)
        {
            long long tempW;
            long long tempV;

            for (int i = 0; i < A.size(); ++i) {
                if(bit & (1<<i)){
                    tempW += A[i].w;
                    tempV += A[i].v;
                }
                if(tempW > W){
                    break;
                }
            }
            if(tempW > W){
                continue;
            }
            nap temp;
            temp.v = tempV;
            temp.w = tempW;
            bagA.push_back(temp);
        }

        for (int bit = 0; bit < (1<<B.size()); ++bit)
        {
            long long tempW;
            long long tempV;

            for (int i = 0; i < B.size(); ++i) {
                if(bit & (1<<i)){
                    tempW += B[i].w;
                    tempV += B[i].v;
                }
                if(tempW > W){
                    break;
                }
            }
            if(tempW > W){
                continue;
            }
            nap temp;
            temp.v = tempV;
            temp.w = tempW;
            bagB.push_back(temp);
        }

        sort(bagA.begin(),bagA.end(),[](const nap& a, const nap& b){
            return a.v > b.v;
        });

        sort(bagB.begin(),bagB.end(),[](const nap& a, const nap& b){
            return a.w < b.w;
        });

        int max_index = 0;
        int max_value = 0;
        for (int i = bagA.size()-1; i >= 0; ++i) {
            int tmep = binary_search(W-A[i].w);

        }



    }else if(max_w <= 1000){
        for (int i = 0; i < N; ++i) {
            for (int k = 0; k < 1010; ++k) {

                if(k >= w[i]){
                    dp[i+1][k] = max(dp[i][k],dp[i][k-w[i]] + v[i]);
                }

                dp[i+1][k] = max(dp[i+1][k], dp[i][k]);
            }
        }

    }





    return 0;
}