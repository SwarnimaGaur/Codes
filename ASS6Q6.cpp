#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

 bool pal(string str, int n){
	if(str[0]==str[n-1]&&str.length()!=0){
		
		 pal(substr.str(0,(n-2)), (n-1) );
		 
		 return true;
	}
else if(str.length()==1){
	
	return true;
}	
else{
	return false;
}
}

int main(){

string str;
cout<<"Please enter a string"<<endl;
getline(cin,str);
int n=str.length();
cout<<"The string is palindrome "<<pal(str,n);

}
