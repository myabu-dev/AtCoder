#include<iostream>
#include<algorithm>

using namespace std;

int main (void){
    int N;
    int t[100010];
    int x[100010];
    int y[100010];
    bool flag = true;

    cin>>N;
    for(int i=0;i<N;i++){
        cin>>t[i]>>x[i]>>y[i];
    }

    for(int i=0;i<N;i++){
        if(t[i]>=(x[i]+y[i])){
            if(t[i]%2==0){
                if((x[i]+y[i])%2==1)
                    flag=false;
            }

            if(t[i]%2==1){
                if((x[i]+y[i])%2==0)
                    flag=false;
            }
        }else{
            flag=false;
        }
    }

    if(flag==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
