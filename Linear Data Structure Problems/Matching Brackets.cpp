#include <bits/stdc++.h>

using namespace std;

void ISO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool is_valid_sequence(string &str){

    stack<char> brackets;

    for(char bracket : str){
        if(bracket == '(' || bracket == '{' || bracket == '['){
            brackets.push(bracket);
        }
        else{
            if(brackets.empty()){
                return false;                                       // Unmatched closing bracket
            }

            char top = brackets.top();
            brackets.pop();

            if((bracket == ')' && top != '(') ||
                (bracket == '}' && top != '{') ||
                (bracket == ']' && top != '[')) {
                return false;                                       // Mismatched opening and closing brackets
            }
        }
    }

    return brackets.empty();                                        // All opening brackets should be matched
}

void solution(string str){
    if(is_valid_sequence(str)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

signed main(){
    ISO();

    string str;
    cin >> str;

    solution(str);

    return 0;
}
