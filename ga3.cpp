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
	
	int count=0;
	for(int i=0;i<size;i++){
		if(a[i]<0){
		temp=a[count];
		a[count]=a[i];
		a[i]=temp;
	count=count+1;
}
	
	}
	
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	
	
}
	
