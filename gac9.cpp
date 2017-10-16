#include<iostream>
//find k pairs which have least sum array a, and b

using namespace std;

pairs3(int a[],int b[], int n1, int n2){
	
	int k=0,j=0;
	int size=(n1*n2);
	int sum[size];
	int min1=0,min2=0,min3=0,p1=0,p2=0,p3=0;
	
		for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			sum[k]=a[i]+b[j];
			k=k+1;
		}}
		//sum array
		
		cout<<"sum array is "<<endl;
		for(int i=0;i<size;i++){
			cout<<sum[i]<<"\t";
		}
		cout<<endl;
	
	//find min1	
	min1=sum[0];
		for(int i=0;i<size;i++){
			
			while(j<n2){
				if(a[j]<min1){
					p1=j;
					min1=a[j];
					j=j+1;
				}
	
			else{
				j=j+1;
			}
		}
		cout<<"min1="<<min1<<endl;
	}
	//cout<<"min1="<<min1<<endl;
		///find min2
		min2=sum[0];
			for(int i=0;i<size;i++){
			
			while(j<n2){
				if(a[j]!=min1){
				
				if(a[j]<min2 && min2!=min1){
					p2=j;
					min2=a[j];
					j=j+1;
				}
				else if(a[j]>min2 && min2!=min1){
					j=j+1;
				}	
			}
			else{
				j=j+1;
			}
			if(min2==min1){
				min2=sum[i+1];
			
			}
		}
	}
	//cout<<"min2="<<min2<<endl;
	//find min3
	min3=sum[0];
		for(int i=0;i<size;i++){
			while(j<n2){
				if(a[j]!=min1 && a[j]!=min2){
				
				if(a[j]<min3 && min3!=min1 && min3!=min2){
					p3=j;
					min3=a[j];
					j=j+1;
				}
				else if(a[j]>min3 && min3!=min1 && min3!= min2){
					j=j+1;
				}
			}
			else if(a[j]==min1 || a[j]==min2){
				j=j+1;
			}
			if(min3==min1 || min3==min2){
				min3=sum[i+1];
			}
		}
	}
	//cout<<"min3="<<min3<<endl;
	//print pairs

	for(int i=0;i<size;i++){
		if(sum[i]==min1){
			cout<<a[(i/n2)]<<","<<b[(i%n2)]<<"\t";
			break;
		}
	}
	
	for(int i=0;i<size;i++){
		if(sum[i]==min2){
			cout<<a[(i/n2)]<<","<<b[(i%n2)]<<"\t";
			break;
		}
	}
	
	for(int i=0;i<size;i++){
		if(sum[i]==min3){
			cout<<a[(i/n2)]<<","<<b[(i%n2)]<<"\t";
			break;
		}
	}

}

int main(){

	int n1;
	cout<<"please enter size of the array"<<endl;
	cin>>n1;
	int a[n1];


	cout<<"please enter the elements of the array"<<endl;
	for(int i=0;i<n1;i++){	
		cin>>a[i];
	}
	
		int n2;
	cout<<"please enter size of the array"<<endl;
	cin>>n2;
	int b[n2];


	cout<<"please enter the elements of the array"<<endl;
	for(int i=0;i<n2;i++){	
		cin>>b[i];
	}
	
pairs3(a,b,n1,n2);

}
