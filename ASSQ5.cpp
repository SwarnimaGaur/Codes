//	Reverse String word wise. Eg “Welcome to Coding Ninjas” reversed is –
//“Ninjas Coding to Welcome”
	#include<iostream>
	#include<string>
	
	using namespace std;
	
	
	int main(){
		string str;
		cout<<"Please enter the number of words "<<endl;
		int w;
		cin>>w;
		cout<<"Please enter a string="<<endl;
		
		getline(cin,str);
		
		int index[w]; //earlier index had 20 size! 
		int j=0;
		int n=str.length();
		
		for(int i=0;i<=n;i++){
			
			if(str[i]== ' ' || str[i]== '\0'){
				
				index[j]=i;
				j++;
				cout<<"1";
			}	
		}
		int n1= (sizeof(index))/4;	
		string c[n1]; //compulsory to give size to array;
	
		//store words in a string array
		for(int i=0;i<n1;i++){
			c[i]="";
			if(i==0){
				for(int j=0;j<index[i];j++){
						
				c[i]=c[i]+str[j];
			}
		}
			else{
				for(int j=(index[i-1]+1); j<index[i]; j++){
				
					c[i]=c[i]+str[j];
				}
			} cout<<"2";
		} //not coming out of this loop
		
cout<<"3";
		cout<<"The reversed string is ";
			string rev="";   					// print rev string!
			for(int i=n1-1;i>=0;i--){
				
				rev = rev + c[i] + ' ';
				
					}
					
					cout<<rev<<endl;
		return 0;					
		}
