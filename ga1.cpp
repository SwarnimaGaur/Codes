#include<iostream>

using namespace std;

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];
	
	cout<<"enter elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	int r;
	cout<<"enter number of rotations"<<endl;
	cin>>r;
	int i=0;
	int b[size];
	for(i=0; i<(size-r); i++){
		
		if((r+i) < size){
			b[i] = a[r+i];
		}
	}
	
	int j=0;
	
	while(i<size){
		
		b[i]=a[j];
		j++;
		i++;
	
		
	}	
	for(int k=0;k<size;k++){
	
	cout<<b[k]<<"\t";
}
}



