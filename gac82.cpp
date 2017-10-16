#include<iostream>

using namespace std;
void number(int a[], int size){
	int i=0;
	int j=0;
	int count=0;
	
	while(i<size){
		
		if(i==0 && j==0){
			j=j+1;
		}
		if(j<i){
			if(a[j]>a[i]){	
			count=count+1;
			j=j+1;
		}}
		if(j>i && j<size){
			if(a[j]>a[i]){
				count=count+1;
				j=j+1;
			}
		}
		if(j==size){
  			i=i+1;
			j=0;
			count=0;
		}
		if(count>=2){
			cout<<a[i]<<"\t";
			i=i+1;
			j=0;
			count=0;
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
number(a,size);

}


