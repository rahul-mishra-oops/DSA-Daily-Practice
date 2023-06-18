#include <iostream>
#include <string>
using namespace std;

string stringCompressor(string s1)
{
    string ans;
    int n = s1.length();

    int count = 1;

    ans = ans + s1[0];

    string str;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {

            if (s1[i] == s1[i - 1])
            {
                count++;
                str = to_string(count);
                ans += str;
            }
            if (s1[i] != s1[i - 1])
            {
                str = to_string(count);
                ans += str;
                count = 1;
                ans += s1[i];
                str = to_string(count);
                ans += str;
            }
        }
        else
        {
            if (s1[i] == s1[i - 1])
            {
                count++;
            }
            if (s1[i] != s1[i - 1])
            {
                str = to_string(count);
                ans += str;
                count = 1;
                ans += s1[i];
            }
        }
    }

    if(ans.length()>n){
        return s1;
    }

    return ans;
}

int main()
{
    string s1, s2;
    cout << "Enter string 1:";
    cin >> s1;

    cout << stringCompressor(s1);
}