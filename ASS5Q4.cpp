#include<iostream>
#include<string>

using namespace std;


int main(){
	string str;
	cout<<"Please enter a string="<<endl;
	
	getline(cin,str);
	
	string rev="";
	int n=str.length();
	int i;
	
	
	
	  for(i=0;i<=n;i++) // there's a '\0' char at n(str.length()) position of char array. Null char can be aCCESSED
  	{	int r=rev.length();
  	
  
		if(str[i]==' ' || str[i] == '\0'){
				for(int j=i-1; j>=r; j--){
				rev = rev + str[j];
//				cout<<rev<<"\t";
			}
//			cout<<endl;
//			cout<<rev<<"\t";
			if(str[i]==' '){
				rev = rev + ' ';
			}
			}
		}

cout<<"The reversed line is "<<rev;
return 0;
}

