#include<iostream>
#include<cmath>

using namespace std;


int sum(int n){
	int r=0;
	if(n==0){
		return 0;
	}
	
	else{
		
		r=fabs(n%10); //for positive sum of negative integer
		cout<<r<<endl;
		return (r + sum(n/10)); 
	}
}

int main(){
	int n;
	cout<<"please enter an integer "<<endl;
	cin>>n;
	
//	if(n>=0){	
	cout<<"The sum of digits is "<<sum(n)<<endl;
//}
//else{
//	cout<<"The sum of digits is "<<-sum(n)<<endl;
//}
}
