#include <bits/stdc++.h>
using namespace std;
// Runtime: 226 ms, faster than 96.80% of C++ online submissions for Online Stock Span.
// Memory Usage: 84.4 MB, less than 26.82% of C++ online submissions for Online Stock Span.
// Stack
class StockSpanner
{
public:
    stack<pair<int, int>> st;
    int index = -1;

    StockSpanner()
    {
    }
    // substracting previous greater element's index to the current index
    int next(int price)
    {
        index++;
        while (!st.empty() && st.top().first <= price)
        {
            st.pop();
        }
        int res;
        if (!st.empty())
        {
            res = index - st.top().second;
        }
        else
        {
            res = index + 1;
        }
        st.push(make_pair(price, index));
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main()
{
    StockSpanner *obj = new StockSpanner();
    int param_1 = obj->next(100);
    cout << param_1 << endl;
    param_1 = obj->next(80);
    cout << param_1 << endl;
    param_1 = obj->next(60);
    cout << param_1 << endl;
    param_1 = obj->next(70);
    cout << param_1 << endl;
    param_1 = obj->next(60);
    cout << param_1 << endl;
    param_1 = obj->next(75);
    cout << param_1 << endl;
    param_1 = obj->next(85);
    cout << param_1 << endl;
    return 0;
}