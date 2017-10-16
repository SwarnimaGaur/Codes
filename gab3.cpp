#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];
	
	if(size%2==0){
		
	
	cout<<"please enter the elements of the array"<<endl;
	
	int temp;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
for(int i=1;i<size-1;i=i+2){
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
	for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
	
}

else{
	
	cout<<"Please enter even size of array";
}

}

