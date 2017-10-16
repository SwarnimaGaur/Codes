#include<iostream>
#include<string>

using namespace std;
string orig;
int i=0;
string changePi(string c,int n){
	if(n==1){
		return orig;
	}
	
	else if(c.substr(0,2)=="pi")
		{
			i++;
			orig= orig.substr(0,(i-1)) + "3.14" + c.substr(2,n-2);
			return changePi(c.substr(2,(n-2)),(n-2));
		}
	
	else{
		i++;
		return changePi(c.substr(1,(n-1)), (n-1));
	}
}
int main(){	
	cout<<"Please enter a string with pi"<<endl;
	cin>>orig;
	int n=orig.length();
	cout<<changePi(orig,n);
}
