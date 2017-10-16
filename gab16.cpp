#include<iostream>
//array with 0 and 1 //space=O(n) TIME=0(n) for unique answers for 1!!

using namespace std;
int b[13]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int* triplet(int a[], int size){
	int size2=size;
	int i=0;
	int count=0,count2=0;
	int p=0;
	int j=p+1;
	
	while(i<(size-2)){
		if(j<size){
			if(a[p]<a[j]){
				b[count2]=a[p];
//				cout<<"inserted  ="<<b[count2]<<endl;
				count2=count2+1;
				p=j;
				j=p+1;
			}
			else{
				j=j+1;
			}
			if((count2+1)%3==0){
//				count2=count2+count;
//   			cout<<"entered"<<endl;
				b[count2]=a[p];
//				cout<<"inserted count2=2!!"<<b[count2]<<endl; 
				i=i+1;
				p=i;
				j=i+1; //unique solution for each i
				count2=count2+1; //printing last solution
			}
			else if((count2+1)%3!=0 && j==(size)){
			  	if(count2%3==0 && count2!=0){
				count2=count2-1;
				b[count2]=-1;
			 } 
				 else if(count2%3==1){
				count2=count2-2;
				b[count2+1]=-1;
				b[count2+2]=-1;
			 }
			count2=count2+1;
			i=i+1;
			p=i;
			j=i+1;
		}
	}
		else{
			
			i=i+1;
			p=i;
			j=i+1;
		}
		
		//cout<<i<<"\t";
	}
	cout<<endl;
	
	return b;
//	int count1=0;
//	for(int k=0;k<3;k++){
//		if(b[i]==-1){
//			return 0;
//		}
//		else{
//			count1=count1+1;
//		}
//		if(count1==3){
//			return b;
//		}
//	
//	}
	
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
	
int* b=	triplet(a,size);
	
//   if(b==0){
//   cout<<"No output array"<<endl;	
//	}
//	else
int check=0;
	cout<<"output array is"<<endl;
	for(int i=0;i<13;i++){
	if(b[i]==-1){
		check=check+1;
	}
	if(check==13){
		cout<<"no triplet found"<<endl;
		break;
	}
}

if(check!=13){
	for(int i=0;i<13;i++){
	if(b[i]==-1){
			break;
		}
	if((i+1)%3==0){	
		cout<<b[i]<<"\t";
		cout<<endl;
	}
else{
	cout<<b[i]<<"\t";
	}
	}
 }
}
