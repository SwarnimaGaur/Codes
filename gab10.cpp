#include<iostream>
using namespace std;

//bitonic
 int bitonic(int a[], int size){
 	
 	int count=1;
 	int k=0;
 	int i=0;
 	
 	while(i<size-1 && size!=1){
 		if(a[i]<=a[i+1]){
 			count = count+1;
			if(i!=(size-2) && a[i+1]>=a[i+2]){
 				k=i+1;
			 }
		 }
		 else if(count!=1 && a[i]>=a[i+1]){
		 	
		 	break;
		 }
		 i=i+1;
		 cout<<"k="<<k<<"\t";
	 }
	 
	 //getting executed for 1 size
	 int j=k;
	 cout<<j;
	 while(j<size-1 && size!=1){
	 	
	 	if(a[j]>=a[j+1]){
	 		count=count+1;
			 		 }
		 else{
		 	break;
		 }
		 
		 j=j+1;
		 cout<<"j="<<j<<"\t";
		 	 }
	 return count;
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
	cout<<endl;
   cout<<bitonic(a,size)<<"length";
	return 0;
	
}
