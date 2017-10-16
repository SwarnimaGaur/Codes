#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];
	
	cout<<"please enter the elements of the array"<<endl;

	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
cout<<"please enter the lower and upper values"<<endl;
int low;
int high;
cin>>low;
cin>>high;

int count1=0;
int count2=0; 
int count3=0;

for(int i=0;i<size;i++){
	if(a[i]<low){
		count1=count1+1;
	}
	
	else if(a[i]>=low && a[i]<=high){
		count2=count2+1;
	}
	
	else if(a[i]>high){
		count3=count3+1;
}
}

cout<<"count"<<count1<<"\t"<<count2<<"\t"<<count3<<endl;

int check1=0;
int check2=count1; 
int check3=count1+count2;

for(int i=0;i<size;i++){
	if(a[i]<low){
		int temp=a[check1];
		a[check1]=a[i];
		a[i]=temp;
			cout<<"start"<<check1<<endl;
		check1=check1+1;
	}
	
	else if(a[i]>=low && a[i]<=high){
			int temp=a[check2];
		a[check2]=a[i];
		a[i]=temp;
		cout<<"middle"<<check2<<endl;
		check2=check2+1;
		
	}
	
	else if(a[i]>high){
			int temp=a[check3];
		a[check3]=a[i];
		a[i]=temp;
		cout<<"end"<<check3<<endl;
		check3=check3+1;	
}	
}
for(int i=0;i<size;i++){	
	cout<<a[i]<<"\t";
}
}
