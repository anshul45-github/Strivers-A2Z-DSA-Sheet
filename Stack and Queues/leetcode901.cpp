#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> s;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int res = 1;
        while(!s.empty() && s.top().first <= price) {
            res += s.top().second;
            s.pop();
        }
        s.push(make_pair(price, res));
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
