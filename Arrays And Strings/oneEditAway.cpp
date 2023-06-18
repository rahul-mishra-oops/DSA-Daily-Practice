#include<iostream>
using namespace std;

bool oneEditAway(string s1 , string s2){
    int n = s1.length();
    int m = s2.length();


    if(n-m>1||n-m<-1){
        return false;
    }

    int editCount =0;

    for(int i , j =0 ; i , j<min(m , n) ; i++ , j++){
        if(s1[i]!=s2[j]){
            editCount++;
            if(editCount>1){
                return false;
            }
            if(m-n ==1){
                j++;
            }
            if(m-n == -1){
                i++;
            }

            if(m==n){
                continue;
            }



        }

        else{
            continue;
        }
    }

    return true;


}


int main(){
    string s1 , s2;
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter String 2: ";
    cin>>s2;
    cout<<oneEditAway(s1 , s2);

}