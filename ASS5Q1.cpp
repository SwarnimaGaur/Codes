#include<iostream>
#include<string>


using namespace std;

int main(){

string a;
string b;
cout<<"please enter a string with duplicate alphabets at consecutive positions"<<endl;
cin>>a;

int i=0;
b[0]=a[0];

while(a[i]!='\0'){
	if(a[i]==a[i+1]){
	i++;	
	}
	else {
		
		b=b+a[i];
		i++;
	}
}	

cout<<"The new string is "<<b;
return 0;
}
