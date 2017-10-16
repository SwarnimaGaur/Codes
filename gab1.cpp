#include<iostream>

using namespace std;

int main(){
	int size;
	cout<<"Please enter size of array"<<endl;
cin>>size;
int a[size];
int b[size];
int j=0;
int count=0;
	cout<<"Please enter array elements"<<endl;
	
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}

for(int i=0;i<size;i++){
	
	if(i!=0){
		if(a[i]>0 && b[j-1]<0){
			b[j] = a[i];
			j++;
		}
		
		else if(a[i]<0 && b[j-1]>0){
			b[j]=a[i];
			j++;
		}
		
		else{
			
			count =count+1;
			b[size-count]=a[i];
		}
	}
	
	else{
		b[j]=a[i];
		j++;
	}
}
	cout<<"the array with alternate negative and positive elements is"<<endl;
	
	for(int i=0;i<size;i++){
	cout<<b[i]<<"\t";
	}
	
}
