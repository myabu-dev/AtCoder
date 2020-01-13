#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(void){
    int N;
    int count=0;
    int a[200];
    cin>>N;
    for(int i=0;i<N;i++ ){
        cin>>a[i];
    }

    sort(a,a+N);

    for(int i=0;i<N-1;i++){
        if(a[i]<a[i+1])
            count++;
    }
    count++;

    cout<<count;

    return 0;
}
