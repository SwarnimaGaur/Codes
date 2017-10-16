#include<iostream>
using namespace std;

//even-odd number Time=0(n) SPACE=O(1)

void evenOdd2(int a[], int size){

int pos1=-1;
int i=0;
//making a list of even numbers and just checking even numbers from the beginning till the end, skipping odd numbers. Swap with a[pos1] which is odd!
while(i<size){
	if(a[i]%2==0){
		if(i>pos1){
			pos1=pos1+1;
			int temp=a[pos1];
			a[pos1]=a[i];
			a[i]=temp;
			i=i+1;
		}
		else{
			i=i+pos1;
		}
	}	
	else{
		i=i+1;
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
 evenOdd2(a,size);
 		for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
}
