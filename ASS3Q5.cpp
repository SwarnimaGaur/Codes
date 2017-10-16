#include<iostream>

using namespace std;

int main(){
	
	int size=0;
	cout<<"Please enter odd size of the array="<<endl;
	cin>>size;
	
	int a[size];
	int n;
	n=(size-1)/2;
	cout<<"Enter elements of the array with "<<n<<" same elements"<<endl;
	
	for(int i=0;i<size;i++){
		cin>>a[i];
		
	}
	int count;
	
	for(int i=0;i<size;i++){
		count=0;
		for(int j=i+1;j<size;j++){
			
			if(a[i]==a[j]){
				count++;
				
			}
		}
		if(count==0){
			
			cout<<"The non duplicate values are= "<<a[i]<<endl;
		}
		
	}
return 0;
}
