#include<iostream>
#include<string>


using namespace std;

int main(){

string a;
cout<<"please enter a string with duplicate alphabets at any position"<<endl;
cin>>a;
int k=0;

while(a[k]!='\0'){
	k++;
}

int i=0;
int b[k-1];
 
 while(a[i]!='\0'){
 int j=i+1;
 int count=0;
 while(a[j]!='\0'){
 	if(a[i]==a[j]){
	count++;
 }
 j++;
 }
 b[i]=count+1;
 i++;
}
int max=b[0];
int j;
for(j=0;j<k-1;j++){
	
	if(b[j]>=max){
		
		max=b[j];	
	}
}

for(int i=0;i<k-1;i++)
{
	if(max==b[i]){
		cout<<a[i]<<" is the element with maximum no. of repetitions occurring "<<max<<" no. of times"<<endl;
	}
}

return 0;
}
