//to remove all x from a string. ASSIGNMENT6 Q8

#include<iostream>
#include<string>

using namespace std;

string orig;
int i=0;

string noX(string str, int n){
	if(n==0){
		return orig;
	}
	
	else if(str[0]=='x'){
		i++;
		orig=orig.substr(0,i)+ orig.substr((i+1),(n-(i+1)));
		return noX(str.substr(1,(n-1)),(n-1));
		
	}
	else{
		i++;
		return noX(str.substr(1,(n-1)),(n-1));
	}
}

int main(){
	cout<<"please enter a string with X"<<endl;
	cin>>orig;
	
	int n=orig.length();
	cout<<noX(orig,n);
	
}
