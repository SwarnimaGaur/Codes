#include<iostream>
using namespace std;

//maximum-minimum form of random arrray
//TIME=O(n) SPACE=O(1)

void maxMin(int a[], int size){
	int max,min,pos1,pos2;
	
	
for(int i=0;i<(size-1);i++){
	max = a[i];
	pos1=i; //amazing
	min = a[i];
	pos2=i; //amazing. If same element is minimum then it wo't use previous minimum's pos2 
	for(int j=i+1; j<size; j++){
		
		if(i%2==0 && a[j]>= max){
				max = a[j];
				pos1 = j;
					//cout<<"max="<<max<<"\t";
				
		}
		
		else if(i%2!=0 && a[j]<= min) {
				min = a[j];
				pos2 = j;
				//	cout<<"min="<<min<<"\t";		
		} 
	 }
 
		if(i%2 == 0){
		//	cout<<"<-------"<<"pos= "<<pos1<<" max element= "<<a[pos1]<<"swapped with position "<<i<<" and element "<<a[i]<<endl;
			a[pos1]=a[i];
			a[i]=max;
		}
		else{
			//	cout<<"<------"<<"pos= "<<pos2<<" min element= "<<a[pos2]<<"swapped with position "<<i<<" and element "<<a[i]<<endl;
			a[pos2] = a[i];
			a[i]= min;
			
		}
	//	cout<<a[i]<<"+";
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
	
	maxMin(a,size);

cout<<"the output array is "<<endl;

for(int i=0;i<size;i++){
	cout<<a[i]<<"\t";
}


}
