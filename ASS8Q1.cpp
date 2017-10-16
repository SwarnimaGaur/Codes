#include<iostream>
using namespace std;  // 10 14 19 26 27 28 31 35 42 44

int val;
int size;
int a[100];
int start=0;
int end=size-1;
int mid;

int binary(int start, int end){
	int middele=b+e/2
	if(start==end&&val==a[start]){
		return (start+1);
	}
	
	
	else if(start==end&&val!=a[start]){
	return -1;
	}
	
	else if(val==a[mid]){
		return mid+1;
	}
	
	else if(val>a[mid]){
		start=mid;
			mid=mid+(start-end)/2;
		binary(start,end);
		
		}
		
	else if(val<a[mid]){
	end=mid;
	mid=mid-(start-end)/2;
	binary(start,end);

	}		
}


int main(){
	cout<<"Please ener size of the array"<<endl;
	cin>>size;
	a[size];
	
	cout<<"please enter elements in the array in a sorted manner"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
		mid=size/2;
	
	cout<<"please enter the value you need to find"<<endl;
	cin>>val;
	cout<<"The position of the value is"<<binary(0,(size-1));
	
	
}
