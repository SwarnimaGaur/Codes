#include<iostream>

using namespace std;

int main(){
	int size;
	cout<<"Enter the size ="<<endl;
	cin>>size;
	
	int a[size];
	cout<<"Please enter ethe array elements."<<endl;
		
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}	
		for(int i=0;i<((size)/2);i++){
      	int temp=a[i];
      	a[i]=a[size-(i+1)];
      	a[size-(i+1)]=temp;      	
	}
	cout<<"The reversed array is= "<<endl;
	for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
	
}
