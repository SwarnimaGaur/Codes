#include<iostream>

using namespace std;

int main(){
	
	int a[5]={1,2,3,4,5};
	int b[5]={7,8,9,1,0};
	int c[10];
	int count=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		 if(a[i]==b[j]){
		 	c[i]=b[j];
		 	sif(i==1){
			 count++;
			 }
		 }		 
	}
	}
	
	for(int i=0;i<10;i++){
		cout<<c[i]<<"\t"<<endl;
	}
	
	
}
