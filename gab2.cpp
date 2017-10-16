#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];
	
	cout<<"please enter the elements of the array"<<endl;
	
	int temp;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	for(int i=0;i<(size)/2;i++){
		temp=a[i];
		a[i]=a[size-(i+1)];
		a[size-(i+1)]=temp;
		
		
	}
	
	for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
	
}
