//sort an array which is rotated 
#include<iostream>

using namespace std;
// first find pivot element
int size;

int find(int* a,int s,int e,int v){
	
	if(s>e)
	return -1;
	
	int mid=(s+e)/2;
	if(a[mid] == v)
		return mid;
	
	
	 if(a[mid]>=a[s]){
		
		if(v>=a[s] && v<= a[mid])
		
		return find(a,s,mid-1,v);
		return find(a,mid+1,e,v);
		}
		
		if(v>=a[mid]&& v<= a[e])
		
		return find(a,mid+1,e,v);
		return find(a,s,mid-1,v);
		}
		



int main(){
	int v;
	int a[size];
	cout<<"Please enter size of the array"<<endl;
	cin>>size;
	cout<<"Please enter array elements"<<endl;
	
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
	cout<<"Please enter the value to find"<<endl;
	cin>>v;
	
	cout<<"The value is found at "<<find(a,0,(size-1),v)<<endl;
}



