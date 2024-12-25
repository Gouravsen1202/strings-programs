#include<iostream>
using namespace std;
bool substring(string &str1,string &str2){
	int j=0;
	char m=str1.length();
	char n=str2.length();
	for(int i=0;i<m;i++){
		if(str1[i]==str2[j])
		{
			j++;
		}
	}
if(n==j){
	return true;
}
return false;
}
int main (){
	string str1="a,b,c,d,e";
	string str2="g,n,";
	if ((substring(str1,str2))){
		cout<<"subsequence";
	}
	else{
		cout<<"no sub";
	}	
	}
	

