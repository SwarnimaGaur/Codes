#include<iostream>
#include<string>

using namespace std;

int main(){

int m1,n1;
cout<<"Please enter NUMBER of rows and columns in a table "<<endl;
cin>>m1;
cin>>n1;
cout<<"Please enter the elements." <<endl;

int a[m1][n1];
for(int i=0;i<m1;i++){
	for(int j=0;j<n1;j++){
		cin>>a[i][j];
	}
}


int m2,n2;
cout<<"Please enter NUMBER of rows and columns in a table "<<endl;
cin>>m2;
cin>>n2;
cout<<"Please enter the elements." <<endl;

int b[m2][n2];
for(int i=0;i<m2;i++){
	for(int j=0;j<n2;j++){
		cin>>b[i][j];
	}
}
int c[m1][n2];
//intializing c
	for(int i=0;i<m1;i++){
		for(int j=0;j<n2;j++){
		c[i][j]=0;
		
		}}

if(n1==m2){
	
	for(int i=0;i<m1;i++){
		for(int j=0;j<n2;j++){
			for(int k=0;k<n1;k++){
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	//print it
	cout<<endl;
		for(int i=0;i<m1;i++){
		for(int j=0;j<n2;j++){
		cout<<c[i][j]<<"\t";
		
		}
		cout<<endl;
		}

}
else{
	
	cout<<"please enter another dimensions"<<endl;
}
}
