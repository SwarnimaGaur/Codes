#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int num=0;

int convert(string str, int n){
	if(n==0){
		return num;
	}
	
	else{
		int m=str[0];
		num= num + m*pow(10,(n-1));
		return convert(str.substr(1,(n-1)),(n-1));
	}
	
}

int main(){
	int n;
	string str;
	cout<<"Please enter a string with numbers";
	cin>>str;
	
	cout<<convert(str,n);
	
}
