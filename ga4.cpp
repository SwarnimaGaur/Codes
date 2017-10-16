#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];
	
	cout<<"please enter the elements of the array"<<endl;

	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			
			if(a[i]<0){
				if(a[j]>0){
					int temp=a[j];
					a[j]=a[i];
					a[i]=temp;
					break;
				}
			}
			for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}	
		}
	}
	}
