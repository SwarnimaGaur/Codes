#include<iostream>

using namespace std;

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int x;
	//int b[10];
	//int count=0;
	cout<<"Enter the value of x=";
	cin>>x;
	
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			for(int k=j+1;k<10;k++)
			if(x==a[i]+a[j]+a[k]){
				cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<"="<<x<<endl;
			 	 /*b[i]=a[i];	
			}*/
		}
	}
}
}
