#include<iostream>
#include<string>

using namespace std;

int main(){

int m,n;
cout<<"Please enter NUMBER of rows and columns in a table "<<endl;
cin>>m;
cin>>n;
cout<<"Please enter the elements." <<endl;

int r[m][n];
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>r[i][j];
	}
	
}
int r9[n][m];

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){

r9[i][j]=r[m-1-j][i];
}}
	cout<<"AFter rotation of 90 degrees "<<endl;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cout<<r9[i][j]<<"\t";

}
cout<<endl;
}
}
