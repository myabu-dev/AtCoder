//
// Created by yuu on 2019-06-17.
//

//
// Created by yuu on 2019-06-09.
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

bool compare_by_b(pair<string, int> a, pair<string, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
}

int main(void){
    int N,K;

    map<string, int> name_sum;
    cin>>N>>K;


    for (int i = 0; i < N; ++i) {
        string day;
        string name;
        int price;
        int quantity;

        cin>>day>>name>>price>>quantity;
        if(name_sum.count(name) == 0){
            name_sum[name] = price * quantity;
        }else{
            name_sum[name] += price * quantity;
        }
    }

    vector<pair<string, int>> ans;

    for (int i = 0; i < K; ++i) {
        int max_value = -1;
        string max_name;
        for (const auto& [key, value] : name_sum){
            if(max_value < value){
                max_name = key;
                max_value = value;
            }
        }
        name_sum[max_name] = -1;
        ans.push_back(make_pair(max_name,max_value));
    }

    sort(ans.begin(), ans.end(), compare_by_b);

    for (int i = 0; i < K; ++i) {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }



    return 0;
}