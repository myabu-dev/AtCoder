#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
    vector<int> a;
    int N;
    int Alice=0;
    int Bob=0;

    cin>>N;



    for(int i=0;i<N;i++){
        int input;
        cin>>input;
        a.push_back(input);
    }

    sort(a.rbegin(),a.rend());

    for(int i=0;i<N;i++){
        if(i%2==0){
            Alice+=a[i];
        }else{
            Bob+=a[i];
        }
    }

    cout<<Alice-Bob;
    return 0;
}
