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
    int N,K;
    string S;
    int one_s =0;
    int one_end = 0;
    int zero_s =0;
    int zero_end =0;

    int max=0;
    int max_one_s;
    int max_one_e;

    cin>>N>>K;
    cin>>S;

    char streek = '-1';
    int s_cout = 0;
    for(int i=0; i<S.length();i++){
        if(S[i]!=streek){
            if(s_cout<2){
                if(S[i] == '1'){
                    one_end = i;
                    one_s = i;
                }else{
                    zero_end = i;
                    zero_s = i;
                }
            }

            if(S[i] == '1'){
                zero_end = i;
                one_s = i;
            }else{
                one_end = i;
                zero_s = i;
            }

            if(max < (zero_end-zero_s + one_end -one_s)){
                max = (zero_end-zero_s + one_end -one_s);
                max_one_s = one_s;
                max_one_e = one_end;
            }
            s_cout = 0;
        }
        streek = S[i];
        s_cout++;
    }

    cout<<max_one_s<<endl;
    cout<<max_one_e<<endl;

    return 0;
}