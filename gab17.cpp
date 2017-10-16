#include<iostream>
using namespace std;

void largestSubarray(int a[], int size){

int i=0;
int j=1;
int s=0;
int e=0;
int check1=0;
int check0=0;

while(i<(size-1)){
	s=i;
	
	if(a[j]==1){
		check1=check1+1;
		e=j;
		j=j+1;
	}
	
  else if(a[j]==0){
		check0=check0+1;
		e=j;
		j=j+1;
		
	}
	
	
	
	
	
 if((check1!=check0) && (j==size)){
		i=i+1;
		j=i+1;
		check1=0;
		check0=0;
		e=0;	
	}
	 else if((check1==check0) && (j==size)){
	 	if(check1==0){
		 
		i=i+1;
		j=i+1;
		cout<<"checked check==0"<<"\t";
		}
		else{
		cout<<"The starting and end index is "<<s<<" and "<<e<<endl;
		break;	
		
		}}
		
	else{
		j=j+1;
		cout<<"nothing satisfies"<<"\t";
	
	}
	cout<<"i= "<<i<<"\t";
	cout<<"j= "<<j<<endl;
}


	if(i==(size-1)){
	cout<<"No output sub array"<<endl;	
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
	
	largestSubarray(a,size);
	
}
