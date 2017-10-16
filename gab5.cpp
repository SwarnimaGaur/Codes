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
		} 
	}
	
	

for(int j=0; j<size; j++){
		if(j!=0){
			int s=j;
			for(int k=j-1;k>=0; k--){
	
		if(b[s]<b[k]){
			int temp=b[s];
			b[s]=b[k];
			b[k]=temp;
			
			int temp1=a[s];
			a[s]=a[k];
			a[k]=temp1;
			
			s=k;
				}
			}
	}
	}
	

		//print result
		
	for(int k=0;k<size;k++){
			cout<<a[k]<<"\t";
		}	
	}
