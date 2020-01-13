#include<iostream>
#include<algorithm>


using namespace std;

int main(void){
    int N;
    int Y;
    int a,b,c;  a=b=c=-1;
    bool flag=false;

    cin>>N>>Y;

    int i,j,k;


    for(i=0;i<=N;i++){
        if(flag==true)break;
        for(j=0;j<=N;j++){
            if(flag==true)break;
            for(k=0;k<=N;k++){
                if(flag==true)break;
                if((i+j+k)>N)break;
                int result=10000*i+5000*j+1000*k;
                if((Y==result)&&(N==(i+j+k))){
                    flag=true;
                    a=i;
                    b=j;
                    c=k;
                    break;
                }
            }

        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;

}
