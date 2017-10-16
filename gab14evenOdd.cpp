#include<iostream>
using namespace std;

//even-odd number Time=0(n^2) SPACE=O(1)

void evenOdd(int a[], int size){
int count=0;

for(int i=0;i<size;i++){
	if(a[i]%2==0){
		count =count+1;
	}	
	
}

for(int i=0;i<count;i++){
	if(a[i]%2!=0){
		for(int j=count;j<size;j++){
			if(a[j]%2==0){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
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
 evenOdd(a,size);
 		for(int i=0;i<size;i++){
		
		cout<<a[i]<<"\t";
	}
}
