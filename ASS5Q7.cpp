#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str;
	cout<<"Please enter a string "<<endl;
	getline(cin,str); 
	
	int n=str.length();
	int b[n];
	
 for(int i=0;i<n;i++){
	b[i]=0;		
		}
		
for(int i=0;i<n;i++){
	
for(int j=i+1;j<n;j++){
			if(str[i]==str[j]){
				
				b[i]=j;
				break;
			}
			else{
				b[i]=-1;
			}
		}
	}
	
	int max=b[0];
	int pos=0;
	int pos2 = (n-1);
	
	for(int i=0;i<n;i++){
		if(b[i]==-1){
			pos=i;
//			cout<<i<<endl;
			for(int j=i+1;j<n;j++){
				if(b[j]!=-1)
				pos2=b[j];
//				cout<<pos2<<endl;
				break;
			}
			break;
		}
	}
	int x=pos2-1;
	cout<<x<<endl;

	for(int i=pos; i<=x ;i++){
		cout<<str[i];
	}
} ///abcdabceb
