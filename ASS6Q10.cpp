#include<iostream>
#include<string>

using namespace std;
int size;
int i=0;
	string str1;
	string str2;
	int n1=str1.length();
	int n2=str2.length();
bool check(string a, string b){ //size was exceeding
	
	
	if(n1!=n2){
		return false;
	}
	if(n1==0&&n2==0){
		if(i==size){
		
		return true; //don't calculate length in every case. just dcerment it
	}}
	else if(a[0]==b[(n2-1)]){
		i=i+1;
		a=a.substr(1,(n1-1));
		b=b.substr(0,(n2-1));
		n1=n1-1;
		n2=n2-1;
	
		return check(a,b);	
	}	
	
}


int main(){

	cout<<"Please enter 2 strings"<<endl;
	int n=str1.length();
	size=n;
	cin>>str1;
	cin>>str2;
	
	cout<<"The 2 strings are reverse of each other." <<boolalpha<<"\t"<<check(str1,str2);
	
}
