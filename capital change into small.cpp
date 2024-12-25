#include<iostream>
using namespace std;
void convert(string &str){
	for( int i=0;i<str.length();++i){
		char ch=str[i];
		if(ch>='A'&& ch<='Z'){
			str[i]=str[i]+32;
		}
		else if(ch>='a'&& ch<='z'){
			str[i]=str[i]-32;
		}
	}
	
}int main(){
	string str="gouRav";
	convert(str);
	cout<<str;
}



