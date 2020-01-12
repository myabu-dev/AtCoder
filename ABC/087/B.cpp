#include<iostream>

using namespace std;

int main (void){
    int a,b,c,x;
    int count=0;
    cin>>a>>b>>c>>x;

    for(int i=0;i<=a;i++){
        int ans=x;
        ans=ans-500*i;
        if(ans==0)count++;
        //   cout<<ans<<endl;
        if(ans>0){
            for(int j=0;j<=b;j++){
                ans=x-500*i;
                ans=ans-100*j;
                //    cout<<ans<<endl;
                if(ans==0)count++;
                if(ans>0){


                    for(int k=0;k<=c;k++){
                        ans=x-500*i-100*j;
                        ans=ans-50*k;
                        if(ans==0)count++;
                        //   cout<<ans<<endl;
                    }
                }
            }
        }

    }

    cout<<count;

    return 0;
}
