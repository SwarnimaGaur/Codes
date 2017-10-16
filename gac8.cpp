#include<iostream> //to find numbers with atleast 2 numbers greater than it

using namespace std;
void sort(int a[], int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			int min=a[i];
			if(a[j]<=min){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				min=a[i];
			}	
		}
	}	
	
}

void number(int a[], int size){
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=i+1;j<size;j++){
			if(a[j]>a[i]){
				count=count+1;
			}
		}
		if(count>=2){
			cout<<a[i]<<"\t";
		}
	}
}


int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];


	cout<<"please enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	sort(a, size);
	number(a, size);
}
