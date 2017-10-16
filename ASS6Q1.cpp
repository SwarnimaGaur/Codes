#include<iostream>

using namespace std;

int mult(int m, int n){

	
	if(n==0 ){
		return 0;
	}
	else{
		
		return (m+ mult(m,(n-1)));
	}
	
	
}

int main(){
	int m,n;
	cout<<"Please enter 2 numbers to multiply "<<endl;
	cin>>m;
	cin>>n;
	if(n >=0){
	
	cout<<"The product is "<<mult(m,n)<<endl;
	
}

else{
	n=(-1 * n); 
	int d= (-1 * mult(m,n));
	cout<<"The product is "<<d<<endl;
}
}
