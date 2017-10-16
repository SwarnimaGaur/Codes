#include<iostream> //my code :)
using namespace std;
float sum(float *a, int size){ //accessing element here
	if(size==0){
		return 0;
	}
	else{
		return (a[size-1] + sum( a ,(size-1)));
	}

}
int main(){
	cout<<"Please enter the number of elements you want to add "<<endl;
	int size;
	cin>>size;
	float a[size];
	
	cout<<"Please enter the elements "<<endl;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
	cout<<"the sum of the elements is "<<sum ( a, size); //passing address here
	
}
