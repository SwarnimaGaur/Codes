#include<iostream>
using namespace std;

//absolute value

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];

	cout<<"please enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
	cout<<"please enter the value"<<endl;
	int x;
	cin>>x;
	int b[size];
	
	for(int i=0;i<size;i++){
		
		b[i]=(a[i]-x);
		if(b[i]<0){
			b[i]= (-1*b[i]);
		} cout<<"print b"<<b[i]<<"\t";
	}
	
	cout<<"printed"<<endl;
	
	int min;
	int i=0;
	int pos=0;
	
	for(int j=0;j<size;j++){
		min = b[j];
	
	for(i=j+1; i<size;i++){
		if(b[i]<=min){
		min=b[i];
		pos=i;
	}}
	int temp=min;
	b[pos]=b[j];
	b[j]=temp;
	
	
//		min=b[i];
//		cout<<b[i]<<"\t";
//		
//		temp1=a[count];
//		a[count]=a[i];
//		a[i]=temp1;
//
//			count=count+1;
		
	cout<<"first letter"<<"\t";
	cout<<b[j]<<endl;
	}
	
	cout<<"over";
		//print result
	for(int k=0;k<size;k++){
			cout<<b[k]<<"\t";
		}	
	}
