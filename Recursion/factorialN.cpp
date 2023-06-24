#include<iostream>
using namespace std;
//functiona; way
int fact(int n){
    if(n==1)return 1;
    return n*fact(n-1);
}
//parameterized way
// void fact(int i , int res){
//     if(i==1){
//         cout<<res<<" ";
//         return;
//     }

//     fact(i-1 , res*i);
// }

int main(){
    int n;
    cin>>n;
    // fact(n , 1); parameterized way function call
    cout<<fact(n);
    return 0;
}