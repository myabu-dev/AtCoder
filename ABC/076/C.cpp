//
// Created by yuu on 2019-04-15.
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
    string S,T;
    cin>>S;
    cin>>T;

    vector<string> temp;
    for (int i = 0; i < S.size(); ++i) {
        bool flag = true;
        string tep =S;
        for (int j = 0; j < T.size(); ++j) {
            if(S[i+j]==T[j] || S[i+j]=='?'){
                tep[i+j] = T[j];
                continue;
            }
            flag = false;
        }

        if(flag){
            for (int j = 0; j < tep.size(); ++j) {
                if(tep[j]=='?'){
                    tep[j] = 'a';
                }
            }
            temp.push_back(tep);
        }
    }

    if(temp.size() == 0){
        cout<<"UNRESTORABLE"<<endl;
        return 0;
    }

    sort(temp.begin(),temp.end());

    cout<<temp[0]<<endl;


    return 0;
}
