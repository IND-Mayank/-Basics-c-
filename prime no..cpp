#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	m=n/2;
	for(int i=2;i<=m;i++){
		if(n%i==0){
			cout<<"prime number";
			break;
		}
		else{
			cout<<"not prime number";
			break;
		}
	}
}
