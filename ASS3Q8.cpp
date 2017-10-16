#include<iostream>

using namespace std;

int main(){
	int size;
	cout<<"Enter the number of digits of a number"<<endl;
	cin>>size;
	
	int a[size];
	int b[size];
	int c[size+1];
	int sum=0;
	
	cout<<"Enter a number"<<endl;
	
	for(int i=0;i<size;i++){
		
		cin>>a[i];
		
	}
	cout<<"Enter another number"<<endl;
	for(int i=0;i<size;i++){
		
		cin>>b[i];
	}
	for(int i=0;i<size;i++){
		
		c[i]=0;
	}
	
	for(int i=size-1;i>=0;i--){
		
		sum=a[i]+b[i];
		c[i+1]=c[i+1]+sum%10;
		c[i]=c[i]+sum/10;
		//cout<<"Hello"<<endl;
}	

cout<<"the sum of 2 numbers is"<<endl;
for(int i=0;i<size+1;i++){
		
		cout<<c[i]<<"\t";
	}
return 0;
}
