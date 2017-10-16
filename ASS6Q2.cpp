#include<iostream>

using namespace std;
int l=0;
int count(int n){
	
	int r=0;
	if(n==0 && l==0)
	{
		return 1;
	}
	if(n==0 && l==1){    //l is used as a flag
		
		return 0;
	}
	else{
		l=1;
		r=n%10;
		if(r==0){
			return (1+count(n/10));
		}else{
			return count(n/10);
		}
	}
}

int main(){
	int n;
	cout<<"please enter an integer to count its zeros"<<endl;
	cin>>n;
//	if(n==0){   //	since 0 is also an integer
//		cout<<"The number of zeros are "<<1;
//	}
//	else{	
	cout<<"The number of zeros are "<<count(n)<<endl;
// }	
}
