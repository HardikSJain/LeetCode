#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(auto c : s)
        cout << c;
    cout << endl;
    return 0;
}