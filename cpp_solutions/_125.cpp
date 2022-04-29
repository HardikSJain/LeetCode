#include<bits/stdc++.h>
using namespace std;


// RIGHT first attempt
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector <int> str;

        int flag = 1;

        for (int i = 0; i < s.size(); i++)
        {
            if ((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122) || (int(s[i])>=48 && int(s[i])<=57))
            {
                str.push_back(int(s[i]));
            }
        }

        for (int i = 0; i < str.size()/2; i++)
        {
            if (str[i] != str[str.size()-1-i])
            {
                // cout << "false" << endl;
                return false;
            }
        }
        // cout<<"true"<<endl;
        return true;
    }
};