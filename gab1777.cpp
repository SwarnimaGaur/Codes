#include<iostream>
//largest subarray of equal 0s and 1s // WORK ON OR part!
using namespace std;
int b[13]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int k=0;

void largestSubarray(int a[], int size){

int i=0;
int j=1;
int s=0;
int e=0;
int check1=0;
int check0=0;
int flag=0;

while(i<(size-1)){
	
	s=i;
	flag=flag+1;
	
	if((flag==1) && (a[i]==1)){
		check1=1;
	}
	else if((flag==1) && (a[i]==0)){
		check0=1;
	}
	
	
	if(a[j]==1 && (j<size)){
		check1=check1+1;
		e=j;
	}
	
  else if(a[j]==0 && (j<size)){
		check0=check0+1;
		e=j;
	}
	
	cout<<"j= "<<j<<endl;
	
 if((check1!=check0) && (j==(size))){
		i=i+1;
		j=i+1;
		check1=0;
		check0=0;
		e=0;	
		flag=0;
	}
	 else if((check1==check0) && (j==(size))){
//		b[k]=s;
//		k=k+1;
//		b[k]=e;
//		k=k+1;
//		i=i+1;
//		j=i+1;
//		check1=0;
//		check0=0;
//		flag=0;
cout<<"starting and ending indices are "<<s<<" and "<<e<<endl;
break;
		
		}
		else {
			j=j+1;
		}
		
	
	cout<<"i= "<<i<<"\t";

}

 if(i==(size-1)){
	cout<<"no output sub array"<<endl;	
	
}

}


int main(){
	int size;
	cout<<"please enter size of the array"<<endl;
	cin>>size;
	int a[size];


	cout<<"please enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		
		cin>>a[i];
	}
	
	largestSubarray(a,size);
	
//	if(b[0]==-1){
//		
//		cout<<"No output subarray"<<endl;
//	}
//	else{
//		cout<<"The start and end index are ";
//		for(int i=0;i<k;i++){
//			cout<<a[i]<<"\t";
//			if(i%2==1){
//				cout<<"OR ";
//			}
//			
//		}
//	}
	
}
