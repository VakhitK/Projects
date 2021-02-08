#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 */

string longestCommonPrefix(vector<string>& strs) {

    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());

    string first_word = strs[0], answer = "";
    int i = 0;

    while(i < first_word.size()){
        for(size_t j = 1; j < strs.size(); ++j){
            if(first_word[i] == strs[j][i])
                continue;
            else
             return answer;

        }
        answer += first_word[i];
        ++i;
    }

    return answer;
}

int main() {
    vector<string> v = { "flower","flow","flight" };
    cout << longestCommonPrefix(v);
    return 0;
}
