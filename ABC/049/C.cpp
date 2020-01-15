#include<iostream>
#include<string>

using namespace std;

string S;
bool flag=false;

string dream="dream",dreamer="dreamer",erase="erase",eraser="eraser";

void sarch(int pos,int size){
    if(flag==true)return;

    if(S.find(dream,pos)==pos){
        if(pos+dream.size()==size){
            flag=true;
            return ;
        }
        sarch(pos+dream.size(),size);
    }

    if(S.find(dreamer,pos)==pos){
        if(pos+dreamer.size()==size){
            flag=true;
            return ;
        }
        sarch(pos+dreamer.size(),size);
    }

    if(S.find(erase,pos)==pos){
        if(pos+erase.size()==size){
            flag=true;
            return ;
        }
        sarch(pos+erase.size(),size);
    }

    if(S.find(eraser,pos)==pos){
        if(pos+eraser.size()==size){
            flag=true;
            return ;
        }
        sarch(pos+eraser.size(),size);
    }

}


int main(void){

    cin>>S;
    sarch(0,S.size());
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}

