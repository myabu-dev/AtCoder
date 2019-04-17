//
// Created by yuu on 2019-04-17.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;

// 入力
int N;
long long h[100010];

// DP テーブル
long long dp[100010];

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; ++i) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 0; i < N; ++i) {
        chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }

    // 答え
    cout << dp[N-1] << endl;
}