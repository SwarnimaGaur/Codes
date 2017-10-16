#include<iostream>
#include<string>

using namespace std;

int main(){
	 string str;
	 cout<<"Please enter a string with duplicates"<<endl;
	 getline(cin,str);
	 
	 int i=0;
	 int count=0;
	 
	 while(str[i]!='\0'){
	 	if(str[i]== str[i+1]){
	 		count=count+1;
		 }
		 
		 else if(str[i]!=str[i+1]){
		 	if(count>0){
			 count=count+1;			 
		 	cout<<str[i]<<count;
		 }
		 else{
		 	
		 	cout<<str[i];
		 }
		 count=0;
	}
	 	
	 	i++;
	 }
	
	return 0;
	
}
