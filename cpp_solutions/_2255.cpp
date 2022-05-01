#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        vector<string> substring;
        string s2;
        int count = 0;

        for(char c : s)
        {
            s2 += c;
            substring.push_back(s2);
        }
    
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < substring.size(); j++)
            {
                if (words[i] == substring[j])
                {
                    count++;
                }
            }
        
        }
        // cout<<count<<endl;
        return count;
    }
};