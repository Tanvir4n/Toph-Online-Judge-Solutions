#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	int len=str.size();
	for(int i=0; i<len; i++){
		if(str[i]!=' '){
			cout << str[i];
		}
		
	}
	return 0;
}
