#include<iostream>
using namespace std;
void convert(string &str){
	for( int i=0;i<str.length();++i){
		char ch=str[i];
		if(ch>='['&& ch<=']'){
			str[i]=str[i]+32;
		}
		else if(ch>='{'&& ch<='}'){
			str[i]=str[i]-32;
		}
		
	}
	
}int main(){
	string str="[{()}]";
	convert(str);
	cout<<str;
}

