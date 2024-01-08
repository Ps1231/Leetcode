#include <iostream>
#include <stack>
#include <string>
class Solution {
public:
    bool backspaceCompare(string S, string T) {
          return build(S) == build(T);
    }

    std::string build(std::string S) {
        std::stack<char> ans;
        for (char c : S) {
            if (c != '#') {
                ans.push(c);
            } else if (!ans.empty()) {
                ans.pop();
            }
        }

        std::string result;
        while (!ans.empty()) {
            result = ans.top() + result;
            ans.pop();
        }

        return result;
    }
};
        
