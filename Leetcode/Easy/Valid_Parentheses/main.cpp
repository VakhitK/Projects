#include <iostream>
#include <string>
#include <stack>
#include <vector>

bool isValid(const std::string &s) {

    std::stack<char> buf;

    if(s.empty() || s[0] == ')' || s[0] == '}' || s[0] == ']') return false;

    for(const auto &i : s){
        if( i == '(' || i == '{' || i == '[') buf.push(i);

        if(!buf.empty()) {
            if( i == ')' and buf.top() == '(') {buf.pop();} else if( i == ')' and buf.top() != '(') {buf.push(i);}
            if( i == ']' and buf.top() == '[') {buf.pop();} else if( i == ']' and buf.top() != '[') {buf.push(i);}
            if( i == '}' and buf.top() == '{') {buf.pop();} else if( i == '}' and buf.top() != '{') {buf.push(i);}
        }
        else {
            buf.push(i);
        }

    }

    return buf.empty();

}

int main()
{
    std::vector<std::string> v = {"(){}}{", "(])"};

    for(const auto &i : v){
        std::cout << isValid(i) << std::endl;
    }

    return 0;
}
