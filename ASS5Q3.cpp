#include <iostream>
#include<string>
using namespace std;

int main() {
	
	int num;
	cout<<"Enter the number of words "<<endl;
	cin>>num;
    string a[num];
	 
	cout<<"Enter "<<num<<" words"<<endl;
//input string array	
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	
	int m =sizeof(a);
	m=m/4;
	int b[m]; //string length array
    
	for(int i=0;i<m;i++){
     int j=0;
	 
	 while(a[i][j]!='\0'){
	 j++;	
	 }
	b[i]=j;
	}
	
	
	 //gives size in bytes
//sorting length array
	for(int i=0;i<m;i++){
	
		for(int j=m-1;j>=0;j--){
			
			if(b[j]<b[j-1]){
				
				int temp;
				temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
				
			}
		}
	}	
	//assigning values to new array
//		cout<<"sorted array is "<<endl;
//    	for(int i=0;i<m;i++){
//			cout<<b[i]<<"\t";
//		}
	
	string c[m];
	for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){				
				
				if(b[i]==a[j].length()){
					c[i]=a[j];
				}
			}
		}
		
  for(int i=0;i<m;i++){
	
		cout<<"hello"<<endl;
		cout<<c[i]<<"\t";
	}
	return 0;
}

