#include<iostream>
#include<string>
 
using namespace std;
string orig;
int i=0;
int c=0;
int size;
string pairstar(string str,int n){
		if(n==1){
		return orig;
	}
	
	else if(str[0]==str[1]){
		i=i+1;
		c=c+1;
	orig = orig.substr(0,i+c-1) + "*" + orig.substr(i+c-1,size-i);
	size=size+1;
			return pairstar(str.substr(1,(n-1)), (n-1));
}
else{
	
	i=i+1;
	return pairstar(str.substr(1,(n-1)), (n-1));
	}
}


int main(){

	cout<<"Please enter a string with consecutive duplicates"<<endl;
	cin>>orig;
	size=orig.length();
	
	cout<<pairstar(orig,size)<<endl;
	
	return 0;

}
