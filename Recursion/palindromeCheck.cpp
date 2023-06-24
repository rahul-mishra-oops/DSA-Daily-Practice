#include<iostream>
#include<string.h>
using namespace std;
int palindromeCheck(int i , string str , int n){
    if(i>=n/2) return 1;
    else if(str[i]!=str[n-i-1]) return 0;

    return palindromeCheck(i+1 , str , n);
}


int main()
{
    string str;
    cin>>str;
    int n = str.length();
    int ans = palindromeCheck(0 , str , n);
    cout<<ans;
    return 0;
}