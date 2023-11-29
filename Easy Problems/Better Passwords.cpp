#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin>>str;

    for(int i=0; i<str.size(); i++){
        if(str[0]>= 97 && str[0]<= 122){
            str[0] = toupper(str[0]);
        }

        if(str[i] == 's'){
            str[i] = '$';
        }

        if(str[i] == 'i'){
            str[i] = '!';
        }
        if(str[i] == 'o'){
            str[i] = '(';
                str.insert(i + 1, ")");
                    i++;
        }

    }

            cout<<str<<"."<<endl;

            
    return 0;
}
/*

In the modified program, the line str.insert(i + 1, ")"); is used to insert the character ')' at the position immediately following the character 'o' when it needs to be replaced with '()'.

The purpose of i++ after inserting the ')' is to skip the inserted character ')' during the iteration. Since we have inserted an additional character in the string, we want to avoid processing it again in the next iteration of the loop. By incrementing i after the insertion, we effectively skip the newly inserted character and continue the loop from the next position.

Let's take an example to illustrate this:

Suppose the original input word is "oops" and we are in the loop iteration where i is 2. In this case, the character 'o' needs to be replaced with '()'. The line str.insert(i + 1, ")"); will insert the character ')' at position 3 (i + 1). So, after the insertion, the string becomes "oo)p(s".

To avoid processing the inserted character ')' again in the next iteration, we increment i by 1 using i++. Now i becomes 3, and in the next iteration, it will move to the position after the inserted character ')'. This ensures that the inserted character is not processed again.

By incrementing i in this way, we maintain the correct position for the next iteration of the loop and avoid duplicate processing of the inserted character.

*/
