#include <bits/stdc++.h>

using namespace std;

void solution(string message, int key_shift){

    string decoded_text = "";                                                       //initializes an empty string named decoded_text.
    for(char c : message){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';                                     //char base = isupper(c) ? 'A' : 'a';
            char decoded_char = (c - base - key_shift + 26) % 26 + base;            //encoded_text = (c - base + shift) % 26 + base; for right shift
            decoded_text += decoded_char;
        }
        else{
            decoded_text += c;
        }
    }
    cout<<decoded_text<<endl;
}

int main(){

    int key_shift;
    cin >> key_shift;
    cin.ignore();                                                                   //To consume the newline character left in the buffer

    string message;
    getline(cin, message);

    solution(message, key_shift);

    return 0;
}
