#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

 bool pal( string str, int n){
	if(str[0]==str[n-1]&&n>1){
		
		 return pal(str.substr(1,(n-2)),(n-2));
	}
else if(n==1){
	
	return true;
}	
else{
	return false;
}
}

int main(){

string str;
cout<<"Please enter a string"<<endl;
cin>>str;
int n=str.length();
cout<<"The string is palindrome "<<pal(str,n);

}
