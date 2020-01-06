#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void){
    int N;
    int ans,cut;
    cut=ans=0;
    string S;


    cin>>N>>S;

    for(int i=1;i<N;i++){

        for(char c='a';c<='z';c++){
            bool right=false; bool left= false;

            for(int j=0;j<i;j++){
                if(S[j]==c){
                    left=true;
                }
            }

            for(int j=i;j<N;j++){
                if(S[j]==c){
                    right=true;
                }
            }

            if(right==true&&left==true){
                cut++;
            }

        }

        if(ans<cut){
            ans=cut;
        }
        cut=0;

    }


    cout<<ans<<endl;
    return 0;
}
