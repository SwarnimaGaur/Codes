#include<iostream>
using namespace std;

//place all negative elements at the beginning without changing order!

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
				
					for(int k=j+1; k<i; k++){
						if(a[k]>0){
							int temp1=a[k];
							a[k]=a[i];
							a[i]=temp1;
							
						}
					}
				
						break;
				}
			}
		
	}	
	}
	
		for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
	}
