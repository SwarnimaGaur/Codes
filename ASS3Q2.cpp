#include<iostream>

using namespace std;

int main(){
	int a[5]={1,2,3,4,5};
	int x;
	int b[5];
	int count=0;
	cout<<"Enter the value of x=";
	cin>>x;
	
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(x==a[i]+a[j]){
				cout<<a[i]<<" + "<<a[j]<<"="<<x<<endl;
			 	 /*b[i]=a[i];	
			}*/
		}
	}

}
}
